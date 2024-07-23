#include <string>
using namespace std;

bool valid_date(string date) {
    int month = stoi(date.substr(0, 2));
    int day = stoi(date.substr(3, 2));
    int year = stoi(date.substr(6));

    if (date.size() != 10 || month < 1 || month > 12 || day < 1) {
        return false;
    }

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
            (day > 30)) {
        return false;
    }

    if (month in {1,3,5,7,8,10,12} && day > 31) {
        return false;
    }

    if (month == 2 && isLeapYear && day > 29) {
        return false;
    }

    return true;
}