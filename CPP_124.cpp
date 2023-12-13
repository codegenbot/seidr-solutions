
Here is the modified code:
```
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

bool isValidDate(const char* date) {
    int month, day, year;
    char delimiter = '-';
    stringstream ss(date);
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
    const char* date = "04-2003";
    bool valid_date = isValidDate(date);
    if (!valid_date) {
        cout << "Invalid date." << endl;
    } else {
        cout << "Valid date." << endl;
    }
    return 0;
}
```