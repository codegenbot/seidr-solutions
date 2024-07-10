#include <iostream>
#include <string>

bool valid_date(std::string date) {
    if(date.empty()) return false;
    
    int month, day, year;
    if(sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year) != 3) return false;
    
    if(month < 1 || month > 12) return false;
    
    if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 1 || day > 31)) return false;
    if((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) return false;
    if(month == 2 && (day < 1 || day > 29)) return false;
    
    return true;
}

int contest_main() {
    std::string date;
    std::cout << "Enter a date in the format MM-DD-YYYY: ";
    std::cin >> date;

    if(date.length() != 10 || date[2] != '-' || date[5] != '-') {
        std::cout << "Invalid date format. Please enter date in the format MM-DD-YYYY." << std::endl;
        return 1;
    }

    if(valid_date(date)) {
        std::cout << "Valid date." << std::endl;
    } else {
        std::cout << "Invalid date." << std::endl;
    }

    return 0;
}