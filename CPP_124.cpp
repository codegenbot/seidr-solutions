#include <string>
using namespace std;

bool valid_date(string date) {
    int month, day, year;
    size_t pos = 0;
    
    // Extract month and day from the string
    pos = date.find('-');
    month = stoi(date.substr(0, pos));
    pos += 1;
    day = stoi(date.substr(pos, date.find('-', pos) - pos));
    
    // Check for invalid month or day
    if (month < 1 || month > 12)
        return false;
    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
            day > 30 ||
        (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) &&
            day > 31)
        return false;
    
    // Extract year from the string
    pos = date.find('-') + 1;
    year = stoi(date.substr(pos));
    
    return true;
}