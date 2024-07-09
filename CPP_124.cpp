#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    char separator = '-';

    // Split the string into day, month and year
    size_t pos1 = 0, pos2 = 0;
    pos2 = date.find(separator);
    month = stoi(date.substr(pos1, pos2 - pos1));
    pos1 = pos2 + 1;
    pos2 = date.find(separator, pos1);
    day = stoi(date.substr(pos1, pos2 - pos1));
    pos1 = pos2 + 1;

    year = stoi(date.substr(pos1));

    if (month < 1 || month > 12) {
        return false;
    }

    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
            (day > 30)) {
        return false;
    }

    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
         month == 10 || month == 12) && day > 31) {
        return false;
    }

    return true;
}