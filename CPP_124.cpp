Here is the completed code:

```cpp
#include <string>
#include <vector>

using namespace std;

bool valid_date(string date) {
    vector<int> monthDays = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day, month, year;
    if (date.length() != 10 || date[2] != '-' || date[5] != '-') {
        return false;
    }
    for (int i = 0; i < 3; i++) {
        if (!isdigit(date[i])) {
            return false;
        }
    }
    month = stoi(date.substr(0, 2));
    day = stoi(date.substr(3, 2));
    year = stoi(date.substr(6, 4));
    if (month < 1 || month > 12) {
        return false;
    }
    if (day < 1 || day > monthDays[month - 1]) {
        return false;
    }
    return true;
}