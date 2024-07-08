#include <string>
#include <vector>

using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;
    char delimiter = '-';

    // Split the string into day, month and year
    pos = date.find(delimiter);
    month = stoi(date.substr(0, pos));
    date.erase(0, pos + 1);

    pos = date.find(delimiter);
    day = stoi(date.substr(0, pos));
    date.erase(0, pos + 1);

    year = stoi(date);

    // Validate the date
    if (month < 1 || month > 12) {
        return false;
    }

    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
         day > 30) {
        return false;

    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day > 31) {
            return false;
        }
    }

    return true;
}