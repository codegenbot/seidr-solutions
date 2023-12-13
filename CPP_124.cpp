```cpp
#include <iostream>
#include <string>
using namespace std;

bool valid_date(const string& date) {
    // Split the date string into month, day, and year
    int month = stoi(date.substr(0, 2));
    int day = stoi(date.substr(3, 2));
    int year = stoi(date.substr(6, 4));

    // Check if the date is valid
    return (month >= 1 && month <= 12) && (day >= 1 && day <= 31) && (year >= 0);
}

int main() {
    assert(!valid_date("04-2003"));
    cout << "All tests passed!" << endl;
    return 0;
}
```