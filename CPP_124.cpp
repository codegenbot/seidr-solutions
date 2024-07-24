#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    if (date.size() != 10) return false; // rule 1: date string should have 10 characters

    for (int i = 0; i < 3; i++) {
        if (date[i] < '0' || date[i] > '9') return false; // rule 2: all characters should be digits
    }

    day = stoi(date.substr(6, 2)); // get the day from the string
    month = stoi(date.substr(1, 2)); // get the month from the string

    if (month < 1 || month > 12) return false; // rule 3: months should be between 1 and 12

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        maxDays = 29;
    else
        maxDays = 28;

    if (month == 2 && day > maxDays) return false; // rule 4: number of days should not be more than the maximum for that month

    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        && day > 31) return false; // rule 4: number of days should not be more than the maximum for that month

    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) return false; // rule 4: number of days should not be more than the maximum for that month

    return true;
}