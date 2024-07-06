#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;

    // Split the date into mm-dd-yyyy format
    pos = date.find('-');
    month = stoi(date.substr(0, pos));
    day = stoi(date.substr(pos + 1, date.find('-', pos + 1) - pos - 1));
    year = stoi(date.substr(date.find('-', pos + 1) + 1));

    // Check if the date is valid
    if (month < 1 || month > 12)
        return false;
    else if ((month == 2 && day > 29) ||
             (day > 31) ||
             (isLeapYear(year) && (month == 2 && day > 29)) ||
             (day > 30))
        return false;

    return true;
}

// Helper function to check if the year is a leap year
bool isLeapYear(int year) {
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}