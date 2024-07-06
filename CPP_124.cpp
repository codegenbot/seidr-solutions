#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    char dash[3] = "-";
    size_t pos1 = date.find(dash[0]);
    size_t pos2 = date.find(dash[0], pos1 + 1);
    string month_str = date.substr(0, pos1);
    string day_str = date.substr(pos1 + 1, pos2 - pos1 - 1);
    string year_str = date.substr(pos2 + 1);

    if (month_str.length() != 2 || day_str.length() != 2 || year_str.length() != 4)
        return false;

    month = stoi(month_str);
    day = stoi(day_str);
    year = stoi(year_str);

    if (month < 1 || month > 12)
        return false;

    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) &&
        (day < 1 || day > 31))
        return false;
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30))
        return false;
    else if (month == 2 && (day < 1 || (day > 28)))
        return false;

    return true;
}