#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;
    pos = date.find('-');
    string day_month = date.substr(0, pos);
    pos += 1;
    string month_year = date.substr(pos);
    pos = month_year.find('-');
    month = stoi(day_month.substr(0, 2));
    day = stoi(day_month.substr(3, 2));
    year = stoi(month_year.substr(0, 4));

    if (date.empty() || month < 1 || month > 12) {
        return false;
    }

    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            && day > 31) {
        return false;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return false;
    }
    if (month == 2) {
        if (year % 4 != 0)
            return day > 28;
        else if (year % 100 != 0)
            return day > 29;
        else if (year % 400 != 0)
            return day > 28;
    }

    return true;
}