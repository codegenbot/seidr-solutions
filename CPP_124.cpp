#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;
    
    // Split the string into day, month and year
    pos = date.find('-');
    month = stoi(date.substr(0, pos));
    day = stoi(date.substr(pos + 1, date.find('-') - pos - 1));
    year = stoi(date.substr(date.find('-') + 1));
    
    // Check if the date is valid
    if (month < 1 || month > 12) {
        return false;
    }
    
    if ((month == 2 && day < 1) || (month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) {
        return false;
    }
    
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day < 1 || day > 31) {
            return false;
        }
    }
    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        if (month == 2) {
            if (day > 29) {
                return false;
            }
        }
    } else {
        if (month == 2) {
            if (day > 28) {
                return false;
            }
        }
    }
    
    return true;
}