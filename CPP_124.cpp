#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;
    
    // Split the string into day, month and year
    if ((pos = date.find('-')) != string::npos) {
        string temp = date.substr(0, pos);
        day = stoi(temp);
        date.erase(0, pos + 1);
        if ((pos = date.find('-')) != string::npos) {
            temp = date.substr(0, pos);
            month = stoi(temp);
            date.erase(0, pos + 1);
            year = stoi(date);
        } else {
            return false; // Invalid format
        }
    } else {
        return false; // Invalid format
    }

    // Check for valid day, month and year
    if (day < 1 || day > 31) return false;
    if (month < 1 || month > 12) return false;
    
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return day <= 29;
        else
            return day <= 28;
    } else if (isLeapYear(year)) {
        if (month in {1,3,5,7,8,10,12})
            return day <= 31;
        else if (month in {4,6,9,11})
            return day <= 30;
        else
            return day <= 29;
    } else {
        if (month in {1,3,5,7,8,10,12})
            return day <= 31;
        else if (month in {4,6,9,11})
            return day <= 30;
        else
            return day <= 28;
    }
    
    // Helper function to check for leap year
    bool isLeapYear(int y) {
        return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
    }
}