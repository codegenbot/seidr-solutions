```
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int isValidDate(const char* date) {
    int month, day, year;
    char delimiter = '-';
    std::stringstream ss(date);
    ss >> month >> delimiter >> day >> delimiter >> year;

    if (month < 1 || month > 12) return false;
    if (day < 1 || day > 31) return false;
    if (year < 0) return false;

    int daysInMonth = 31;
    if (month == 2) {
        daysInMonth = 28;
        if (year % 4 == 0) {
            daysInMonth = 29;
        }
    }

    return day <= daysInMonth;
}

int main() {
    string date = "04-2003";
    int valid_date = isValidDate(date.c_str());
    if (valid_date == false) {
        cout << "The date is not valid." << endl;
    } else {
        cout << "The date is valid." << endl;
    }
    return 0;
}
```