#include <iostream>
#include <string>
#include <cstdio>

bool valid_date(std::string date) {
    if(date.empty())
        return false;

    int month, day, year;
    if (sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year) != 3)
        return false;

    if (month < 1 || month > 12)
        return false;

    if (day < 1 || day > 31)
        return false;

    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if (day > 29)
                return false;
        } else {
            if (day > 28)
                return false;
        }
    }

    return true;
}

int main() {
    std::string input_date;
    std::cout << "Enter a date in the format (YYYY-MM-DD): ";
    std::cin >> input_date;
    
    if(valid_date(input_date))
        std::cout << "Valid date\n";
    else
        std::cout << "Invalid date\n";
    
    return 0;
}