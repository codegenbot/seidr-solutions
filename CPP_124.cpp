#include <string>
using namespace std;

bool valid_date(string date) {
    int month, day, year;
    size_t pos = 0;
    
    // Extracting month and day from the string
    pos = date.find('-');
    if (pos == string::npos)
        return false; // Invalid date format
    
    string monthDay = date.substr(0, pos);
    int mdy = stoi(monthDay);
    
    // Extracting year from the string
    pos = date.find('-', pos + 1);
    if (pos == string::npos)
        return false; // Invalid date format
    
    string yearStr = date.substr(pos + 1);
    year = stoi(yearStr);
    
    // Converting month and day back to strings for easier manipulation
    monthDay = to_string(mdy);
    month = stoi(monthDay.substr(0, monthDay.find('-')));
    day = stoi(monthDay.substr(monthDay.find('-') + 1));
    
    if (month < 1 || month > 12)
        return false; // Invalid month
    
    if ((month == 2 && day > 29) || 
        (month == 4 || month == 6 || month == 9 || month == 11) && day > 30 || 
        (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
        return false; // Invalid day for the given month
    
    return true;
}