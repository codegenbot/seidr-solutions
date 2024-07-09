#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    char delimiter = '-';
    size_t pos1 = date.find(delimiter);
    size_t pos2 = date.find(delimiter, pos1 + 1);

    if (pos1 == string::npos || pos2 == string::npos)
        return false;

    month = stoi(date.substr(0, pos1));
    day = stoi(date.substr(pos1 + 1, pos2 - pos1 - 1));
    year = stoi(date.substr(pos2 + 1));

    if (month < 1 || month > 12)
        return false;
    
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;

    if (month == 2) {
        if (year % 4 != 0)
            return day > 29;
        else
            return day > 29 || day == 29;
    }

    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
        return false;

    return true;
}