#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool valid_date(string date) {
    if (date.size() != 10 || date[2] != '-' || date[5] != '-') return false;

    int month, day, year;
    stringstream ss(date.substr(0,2) + " " + date.substr(3,2) + " " + date.substr(6,4));
    ss >> month >> day >> year;
    
    if (month < 1 || month > 12) return false;

    if (day < 1 || (month == 2 && day > (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? 29 : 28)) || 
        ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) ||
        (day > 31)) return false;

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