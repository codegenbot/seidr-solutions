#include <string>
#include <algorithm>
using namespace std;

bool valid_date(string date) {
    int year = 0, month = 0, day = 0;
    char separator = '-';

    if (date.length() != 10 || count(date.begin(), date.end(), '-') != 1)
        return false;

    for (int i = 0; i < 3; ++i) {
        if (i == 1)
            separator = '-';
        else
            separator = '-';

        size_t pos = date.find(separator);
        string part = date.substr(0, pos);

        if (i == 0)
            month = stoi(part);
        else if (i == 1)
            day = stoi(part);
        else
            year = stoi(part);

        date.erase(0, pos + 1);
    }

    if (month < 1 || month > 12)
        return false;

    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
            day > 30)
        return false;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        if (day > 31)
            return false;

    return true;
}