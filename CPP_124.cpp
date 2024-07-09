#include <string>
using namespace std;

bool valid_date(string date) {
    size_t pos = 0;
    string day, month, year;

    if (date.find("-") == string::npos)
        return false;

    pos = date.find("-");
    day = date.substr(0, pos);
    month = date.substr(pos + 1, date.find("-") - pos - 1);
    year = date.substr(date.find("-") + 1);

    if (day.size() > 2 || month.size() > 2 || year.size() > 4)
        return false;

    int d = stoi(day);
    int m = stoi(month);
    int y = stoi(year);

    if (m < 1 || m > 12)
        return false;
    
    if ((m == 2 && d > 29) || (m != 2 && (d < 1 || (m % 2 == 0 && d > 30) || (m % 2 != 0 && d > 31))))
        return false;

    return true;
}