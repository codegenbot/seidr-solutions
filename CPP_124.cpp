#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;

    // Extract day, month and year from input string
    pos = date.find('-');
    month = stoi(date.substr(0, pos));
    pos += 1;
    pos = date.find('-', pos);
    day = stoi(date.substr(pos - 3, 2));
    year = stoi(date.substr(pos + 1));

    // Check if the input string is not empty
    if (date.empty()) {
        return false;
    }

    // Check if month is valid
    if (month < 1 || month > 12) {
        return false;
    }

    // Check if day is valid for given month and year
    if ((month == 2 && (stoi(date.substr(0, pos)) % 4) != 0 && (day < 1 || day > 28)) ||
        (month == 4 || month == 6 || month == 9 || month == 11 &&
         (day < 1 || day > 30)) ||
        (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 &&
         (day < 1 || day > 31))) {
        return false;
    }

    return true;
}