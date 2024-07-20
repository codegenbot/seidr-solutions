#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;
    pos = date.find('-');
    string month_str = date.substr(0, pos);
    if (month_str.length() != 2 || !isdigit(month_str[0]) || !isdigit(month_str[1])) {
        return false;
    }
    month = stoi(month_str);

    pos += 1;
    day = stoi(date.substr(pos, 2));
    if (day < 1) {
        return false;
    }

    pos += 3;
    year = stoi(date.substr(pos));

    if (month > 12 || month < 1) {
        return false;
    }
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31) {
        return false;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return false;
    }
    if (month == 2) {
        if (year % 4 != 0) {
            if (day > 28) {
                return false;
            }
        } else {
            if (day > 29) {
                return false;
            }
        }
    }

    return true;
}