#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool isValidDate(const string& date) {
    int month, day, year;
    char delimiter = '-';
    stringstream ss(date);
    ss >> month >> delimiter >> day >> delimiter >> year;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
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
    string date;
    cout << "Enter a date in the format MM-DD-YYYY: ";
    getline(cin, date);
    bool valid_date = isValidDate(date);
    if (valid_date) {
        cout << "The date is valid." << endl;
    } else {
        cout << "The date is not valid." << endl;
    }
    return 0;
}