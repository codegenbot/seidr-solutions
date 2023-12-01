#include <iostream>
#include <string>

bool valid_date(std::string date) {
    if (date.empty()) {
        return false;
    }
    
    int month, day, year;
    if (sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year) != 3) {
        return false;
    }
    
    if (month < 1 || month > 12) {
        return false;
    }
    
    if (day < 1 || day > 31) {
        return false;
    }
    
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return false;
    }
    
    if (month == 2) {
        bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (isLeapYear && day > 29) {
            return false;
        }
        if (!isLeapYear && day > 28) {
            return false;
        }
    }
    
    return true;
}

bool test_valid_date() {
    std::cout << valid_date("04-2003") << std::endl;
    
    return true;
}