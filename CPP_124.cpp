#include <string>
using namespace std;

bool valid_date(string date) {
    int month, day, year;
    size_t pos = 0;

    // Split the date string into mm-dd-yyyy format
    pos = date.find('-');
    month = stoi(date.substr(0, pos));
    pos += 1;
    day = stoi(date.substr(pos, date.find('-', pos) - pos));

    if (!date.substr(0, pos).length() || !date.substr(pos, date.find('-', pos) - pos).length()) {
        return false;
    }

    year = stoi(date.substr(date.find('-') + 1));
    pos = date.find('-');

    // Check for valid month
    if (month < 1 || month > 12) {
        return false;
    }
    
    // Check for valid day based on the month
    if ((month == 2 && day > 29) || 
        (month == 4 || month == 6 || month == 9 || month == 11) && day > 30 || 
        (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31) {
        return false;
    }

    return true;
}