#include <string>
using namespace std;

bool valid_date(string date) {
    size_t pos = 0, pos2 = 0;
    string month, day, year;
    
    // Split the date into month-day-year
    pos = date.find('-');
    if (pos != string::npos) {
        month = date.substr(0, pos);
        date.erase(0, pos + 1);
        pos = date.find('-');
        if (pos != string::npos) {
            day = date.substr(0, pos);
            date.erase(0, pos + 1);
            year = date;
        }
    }
    
    // Check for valid month
    int mon = stoi(month);
    if (mon < 1 || mon > 12)
        return false;
    
    // Check for valid day
    int dy = stoi(day);
    if ((mon == 2 && dy < 1) || (mon == 4 || mon == 6 || mon == 9 || mon == 11) && dy < 1 || 
        (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) && dy > 31)
        return false;
    
    // Check for valid year
    int yr = stoi(year);
    if(yr < 0)
        return false;
    
    return true;
}