#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;
    
    // Split the string into day, month and year
    if ((pos = date.find('-')) != string::npos) {
        month = stoi(date.substr(0, pos));
        day = stoi(date.substr(pos + 1, date.find('-', pos + 1) - pos - 1));
        year = stoi(date.substr(date.find('-', pos + 1) + 1));
    } else {
        return false;
    }
    
    // Validate the month
    if (month < 1 || month > 12)
        return false;
    
    // Validate the day
    if ((month == 2 && day < 1 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11 &&
         day < 1 || day > 30) ||
        (day < 1 || day > 31))
        return false;
    
    return true;
}