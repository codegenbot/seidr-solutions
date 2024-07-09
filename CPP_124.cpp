#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    istringstream iss(date);
    string part;
    int month, day, year;

    iss >> part >> month >> part >> day >> part >> year;

    if (month < 1 || month > 12)
        return false;

    if ((month == 2 && (day < 1 || day > 29)) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
            (day < 1 || day > 30) ||
        (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) &&
            (day < 1 || day > 31))
        return false;

    return true;
}