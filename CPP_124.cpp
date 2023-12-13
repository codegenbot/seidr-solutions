```
#include <iostream>
#include <string>
using namespace std;

bool is_valid_date(const string& date_string) {
    int month, day, year;
    // Parse the date string into month, day, and year.
    size_t pos = date_string.find("-");
    if (pos == string::npos) {
        return false;
    }
    month = stoi(date_string.substr(0, pos));
    day = stoi(date_string.substr(pos + 1, date_string.size() - pos - 1));
    year = stoi(date_string.substr(pos + 2, date_string.size() - pos - 2));

    // Check if the date is valid.
    if (month < 1 || month > 12) {
        return false;
    }
    if (day < 1 || day > 31) {
        return false;
    }
    if (year < 0) {
        return false;
    }
    if (day > days_in_month(month, year)) {
        return false;
    }
    return true;
}

int main() {
    string date_string = "04-2003";
    bool valid_date = is_valid_date(date_string);
    if (!valid_date) {
        cout << "Invalid date: " << date_string << endl;
    } else {
        cout << "Valid date." << endl;
    }
    return 0;
}
```
```
int days_in_month(int month, int year) {
    switch (month) {
        case 1: return 31;
        case 2: return 28; // or 29 in leap years
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
    }
}
```