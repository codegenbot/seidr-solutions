#include <string>
using namespace std;

bool valid_date(string date) {
    size_t pos = 0;
    string month_str, day_str, year_str;
    
    // Check for correct date format
    if (date.find("-") != string::npos) {
        pos = date.find("-");
        month_str = date.substr(0, pos);
        day_str = date.substr(pos + 1, date.find("-", pos + 1) - pos - 1);
        year_str = date.substr(date.find("-", pos + 1) + 1);
    } else {
        return false;
    }
    
    int month, day, year;
    
    // Convert strings to integers
    if (month_str.length() > 0 && day_str.length() > 0 && year_str.length() > 0) {
        month = stoi(month_str);
        day = stoi(day_str);
        year = stoi(year_str);
    } else {
        return false;
    }
    
    // Validate date
    if (month < 1 || month > 12) {
        return false;
    }
    
    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
            (day > 30)) {
        return false;
    } else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && 
               (day > 31)) {
        return false;
    }
    
    // If date is valid, return true
    if (month >= 1 && month <= 12 && day >= 1 && day <= 31) {
        return true;
    } else {
        return false;
    }
}