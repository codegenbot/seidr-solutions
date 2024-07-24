#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool valid_date(string date) {
    int day = 0;
    int month = 0;
    int year = 0;

    if (date.size() != 10) return false; // check the size of string

    for (int i = 0; i < 4; ++i) {
        if (isdigit(date[i])) {
            year = stoi(date.substr(i, 4));
            break;
        }
    }

    for (int i = 5; i < 7; ++i) {
        if (isdigit(date[i])) {
            month = stoi(date.substr(5, 2));
            break;
        }
    }

    day = stoi(date.substr(8, 2));

    // Check the month and days
    if (month < 1 || month > 12) return false; // months should not be less than 1 or higher than 12.
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) return false; // number of days is not less than 1 or higher than 30 for months 4,6,9,11.
    if (month == 2 && (day < 1 || day > 29)) return false; // number of days is not less than 1 or higher than 29 for the month 2.
    if ((month % 2 != 0) && (day > 31)) return false; // number of days is not less than 1 or higher than 31 days for months 1,3,5,7,8,10,12.

    return true;
}

int main() {
    string date = "03-11-2000";
    if (valid_date(date))
        cout << "Date is valid." << endl;
    else
        cout << "Date is invalid." << endl;

    return 0;
}