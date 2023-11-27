#include <string>
using namespace std;

bool valid_date(string date) {
    // Check if the date string is empty
    if (date.empty()) {
        return false;
    }

    // Split the date string into day, month, and year
    int day, month, year;
    sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year);

    // Check if the month is valid
    if (month < 1 || month > 12) {
        return false;
    }

    // Check if the day is valid based on the month
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 1 || day > 31)) {
        return false;
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) {
        return false;
    } else if (month == 2) {
        // Check if the year is a leap year
        bool leapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

        if (day < 1 || (leapYear && day > 29) || (!leapYear && day > 28)) {
            return false;
        }
    }

    // Check if the date is in the format mm-dd-yyyy
    if (date.length() != 10 || date[2] != '-' || date[5] != '-') {
        return false;
    }

    return true;
}