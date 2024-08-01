#include <string>
using namespace std;

bool valid_date(string date) {
    string day, month, year;
    int m, d, y;

    // split the date into day, month and year
    for (int i = 0; i < 10; i++) {
        if (date[i] == '-') break;
        else month += date[i];
    }
    for (int i = 10; i < 15; i++) {
        if (date[i] == '-') break;
        else day += date[i];
    }
    year = date.substr(15);

    // convert the strings to integers
    m = stoi(month);
    d = stoi(day);
    y = stoi(year);

    // validate the month
    if (m < 1 || m > 12) return false;

    // validate the day
    if ((m == 2 && d > 29) || (m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
        return false;
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        if (d > 31) return false;

    // the date is valid
    return true;
}