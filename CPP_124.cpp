#include <iostream>
#include <string>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool valid_date(const string& date) {
    if (date.empty() || date.length() != 10 || date[2] != '-' || date[5] != '-')
        return false;

    int day = stoi(date.substr(0, 2));
    int month = stoi(date.substr(3, 2));
    int year = stoi(date.substr(6, 4));

    if (month < 1 || month > 12)
        return false;

    if (day < 1)
        return false;

    if (month == 2) {
        if (isLeapYear(year)) {
            if (day > 29) return false;
        } else {
            if (day > 28) return false;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) return false;
    } else {
        if (day > 31) return false;
    }

    return true;
}

int main() {
    string date;
    cin >> date;
    cout << (valid_date(date) ? "Valid" : "Invalid") << endl;
    return 0;
}