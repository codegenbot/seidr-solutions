#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    int month, day, year;
    string s = date.substr(0, 2);
    if (s.find('-') != string::npos) {
        stringstream ss(s);
        ss >> month >> day >> year;
    } else {
        return false;
    }

    if (month < 1 || month > 12)
        return false;

    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;
    if ((month == 2 && day > 29) || (month != 2 && day > 31))
        return false;

    if (day < 1)
        return false;

    return true;
}