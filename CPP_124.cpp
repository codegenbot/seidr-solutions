#include <iostream>
#include <cassert>

bool valid_date(const std::string& date) {
    // Given code snippet

    if(date.empty()) return false;
    if(date.size() != 10) return false;
    if(date[2] != '-' || date[5] != '-') return false;
    int month = stoi(date.substr(0, 2));
    int day = stoi(date.substr(3, 2));
    int year = stoi(date.substr(6, 4));
    if(month < 1 || month > 12) return false;
    if(day < 1 || day > 31) return false;
    if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) return false;
    if(month == 2) {
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            if(day > 29) return false;
        } else {
            if(day > 28) return false;
        }
    }
    return true;
}

int main() {
    assert(valid_date("04-2003") == false);
    assert(valid_date("02-2020") == true);
    assert(valid_date("13-2021") == false);
    assert(valid_date("09-1999") == true);
    
    return 0;
}