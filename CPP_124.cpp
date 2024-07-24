#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    stringstream ss(date);
    string month, day, year;
    char ch;
    ss >> month >> ch >> day >> ch >> year;

    if (month.length() != 2 || day.length() != 2 || year.length() != 4)
        return false;

    int m = stoi(month), d = stoi(day), y = stoi(year);

    if (m < 1 || m > 12)
        return false;

    if ((m == 2 && (d < 1 || d > 29)) ||
        (m == 4 || m == 6 || m == 9 || m == 11) &&
            (d < 1 || d > 30) ||
        (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) &&
            (d < 1 || d > 31))
        return false;

    return true;
}