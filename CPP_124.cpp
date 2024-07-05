#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool valid_date(string date) {
    if (date.size() != 10 || date[2] != '-' || date[5] != '-') return false;
    
    int month, day, year;
    stringstream ss(date);
    ss >> month;
    ss.ignore(1);
    ss >> day;
    ss.ignore(1);
    ss >> year;
    
    if (month < 1 || month > 12) return false;
    
    if (month == 2) {
        if (day < 1 || day > 29) return false;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day < 1 || day > 30) return false;
    } else {
        if (day < 1 || day > 31) return false;
    }
    
    return true;
}

int main() {
    // Example usage
    cout << valid_date("03-11-2000") << endl; // true
    cout << valid_date("15-01-2012") << endl; // false
    cout << valid_date("04-0-2040") << endl;  // false
    cout << valid_date("06-04-2020") << endl; // true
    cout << valid_date("06/04/2020") << endl; // false
    return 0;
}