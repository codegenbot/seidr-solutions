#include <iostream>
#include <string>
#include <cmath>
#include <cassert>
#include <sstream> // Add this line

using namespace std;

bool isValidDate(string date) {
    int month, day, year;
    char delimiter = '-';
    stringstream ss;
    ss << month << delimiter << day << delimiter << year;

    if (month < 1 || month > 12) return false;
    if (day < 1 || day > 31) return false;
    if (year < 0) return false;

    int daysInMonth = 31;
    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = 28;
            if (year % 4 == 0) {
                daysInMonth = 29;
            }
            break;
    }

    return day <= daysInMonth;
}

int main() {
    assert(isValidDate("04-2003") == false);
    return 0;
}