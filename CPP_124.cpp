#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;
    pos = date.find('-');
    string month_str = date.substr(0, pos);
    string day_str = date.substr(pos + 1, 2);
    string year_str = date.substr(pos + 3);

    if (month_str.empty() || day_str.empty() || year_str.empty()) {
        return false;
    }

    month = stoi(month_str);
    day = stoi(day_str);
    year = stoi(year_str);

    if (month < 1 || month > 12) {
        return false;
    }

    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
            (day > 30)) {
        return false;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
        month == 10 || month == 12) {
        if (day > 31) {
            return false;
        }
    }

    return true;
}