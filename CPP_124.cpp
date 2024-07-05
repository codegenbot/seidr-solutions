#include <iostream>
#include <string>
using namespace std;

bool valid_date(string date) {
    if (date.empty() || date.size() != 10 || date[2] != '-' || date[5] != '-') {
        return false;
    }

    int month, day, year;
    try {
        month = stoi(date.substr(0, 2));
        day = stoi(date.substr(3, 2));
        year = stoi(date.substr(6, 4));
    } catch (...) {
        return false;
    }

    if (month < 1 || month > 12) return false;

    static const int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int maxDays = daysInMonth[month - 1];

    if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))) {
        maxDays = 29;
    }

    if (day < 1 || day > maxDays) return false;

    return true;
}

int main() {
    string date;
    cin >> date;

    if (valid_date(date)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}