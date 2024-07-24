#include <string>
using namespace std;

bool valid_date(string date) {
    int month, day, year;
    char dash[3] = {'-', 0, '-'};
    size_t pos1 = date.find_first_of(dash);
    size_t pos2 = date.find_last_not_of(dash);

    if (pos1 != string::npos && pos2 != string::npos) {
        string month_str = date.substr(0, pos1);
        string day_str = date.substr(pos1 + 1, pos2 - pos1 - 1);
        string year_str = date.substr(pos2 + 1);

        try {
            month = stoi(month_str);
            day = stoi(day_str);
            year = stoi(year_str);
        } catch (...) {
            return false;
        }

        if (month < 1 || month > 12)
            return false;

        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) &&
            (day < 1 || day > 31))
            return false;

        if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30))
            return false;

        if (month == 2) {
            if (year % 4 != 0)
                return day > 28;
            else if (year % 100 != 0)
                return day > 29;
            else if (year % 400 != 0)
                return day > 28;
        }
    }

    return false;
}