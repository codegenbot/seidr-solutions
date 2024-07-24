#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;
    
    // Extract month, day and year from the string
    pos = date.find('-');
    month = stoi(date.substr(0, pos));
    day = stoi(date.substr(pos + 1, date.find('-', pos + 1) - pos - 1));
    year = stoi(date.substr(date.find('-') + 1));

    // Check if the date string is not empty
    if (date.empty()) {
        return false;
    }

    // Check if the month is valid
    if (month < 1 || month > 12) {
        return false;
    }

    // Check if the day is valid for the given month and year
    if ((month == 2 && (day < 1 || day > 29)) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
        (day < 1 || day > 30) ||
        (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) &&
        (day < 1 || day > 31)) {
        return false;
    }

    // If all checks pass, the date is valid
    return true;
}