#include <string>

bool valid_date(std::string date) {
    if (date.empty()) return false;
    
    int month, day, year;
    if (sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year) != 3) return false;
    
    if (month < 1 || month > 12) return false;
    
    if (day < 1 || (month == 2 && day > 29)) return false;
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) return false;
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31) return false;
    
    return true;
}