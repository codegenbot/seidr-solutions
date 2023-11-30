#include <string>
using namespace std;

bool valid_date(string date) {
    // Check if the date string is empty
    if (date.empty()) {
        return false;
    }
    
    // Check if the date string has the correct format
    if (date.length() != 10 || date[2] != '-' || date[5] != '-') {
        return false;
    }
    
    // Extract the month, day, and year from the date string
    int month = stoi(date.substr(0, 2));
    int day = stoi(date.substr(3, 2));
    int year = stoi(date.substr(6, 4));
    
    // Check if the month is valid
    if (month < 1 || month > 12) {
        return false;
    }
    
    // Check if the day is valid based on the month
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 1 || day > 31)) {
        return false;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) {
        return false;
    }
    if (month == 2) {
        bool leapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (!leapYear && (day < 1 || day > 28)) {
            return false;
        }
        if (leapYear && (day < 1 || day > 29)) {
            return false;
        }
    }
    
    // If all checks pass, the date is valid
    return true;
}