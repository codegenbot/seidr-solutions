#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    int day, month, year;
    stringstream ss(date);
    char ch;
    ss >> month >> ch >> day >> ch >> year;

    if (date.empty() || !ss || month > 12 || day < 1 || day > (month == 2 ? 29 : (month % 2 != 0 && month <= 7) ? 31 : (month % 4 != 0 || month == 2) ? 30 : 28)) {
        return false;
    }

    return true;
}