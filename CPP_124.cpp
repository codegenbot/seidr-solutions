#include <iostream>
#include <sstream>
using namespace std;

bool valid_date(string date) {
    if (date.empty() || date.length() != 10) return false;
    if (date[2] != '-' || date[5] != '-') return false;

    int month, day, year;
    char dash1, dash2;
    stringstream ss(date);
    ss >> month >> dash1 >> day >> dash2 >> year;

    if (ss.fail() || dash1 != '-' || dash2 != '-') return false;
    if (month < 1 || month > 12) return false;
    if (year < 1) return false;

    bool valid = false;
    if (month == 2) {
        valid = (day >= 1 && day <= 29);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        valid = (day >= 1 && day <= 30);
    } else {
        valid = (day >= 1 && day <= 31);
    }

    return valid;
}

int main() {
    // Test cases
    cout << valid_date("03-11-2000") << endl; // true
    cout << valid_date("15-01-2012") << endl; // false
    cout << valid_date("04-0-2040") << endl; // false
    cout << valid_date("06-04-2020") << endl; // true
    cout << valid_date("06/04/2020") << endl; // false
    return 0;
}