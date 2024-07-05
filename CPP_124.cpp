#include <iostream>
#include <sstream>
using namespace std;

bool valid_date(string date) {
    if (date.empty() || date.size() != 10) return false;
    if (date[2] != '-' || date[5] != '-') return false;
    
    int month, day, year;
    char dash1, dash2;
    
    istringstream iss(date);
    if (!(iss >> month >> dash1 >> day >> dash2 >> year)) return false;
    if (dash1 != '-' || dash2 != '-') return false;

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