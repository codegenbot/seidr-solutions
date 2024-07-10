#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    string month_str, day_str, year_str;
    int month, day, year;
    
    // Split the date into month, day and year
    size_t pos = 0;
    while ((pos = date.find('-')) != string::npos) {
        if (month_str.empty()) {
            month_str = date.substr(0, pos);
        } else if (day_str.empty()) {
            day_str = date.substr(pos + 1, date.find('-', pos + 1) - pos - 1);
        } else {
            year_str = date.substr(pos + 1);
        }
    }

    // Convert the month, day and year to integers
    month = stoi(month_str);
    day = stoi(day_str);
    year = stoi(year_str);

    // Check if the date is valid
    if (month < 1 || month > 12) {
        return false;
    }
    
    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
        (day > 30)) {
        return false;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day > 31) {
            return false;
        }
    } else if (month == 2) {
        if (year % 4 != 0 && day > 28) {
            return false;
        } else if (year % 100 != 0 && day > 29) {
            return false;
        } else if (year % 400 != 0 && day > 28) {
            return false;
        }
    }

    return true;
}