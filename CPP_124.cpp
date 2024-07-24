#include <string>
using namespace std;

bool valid_date(string date) {
    string month, day, year;
    int mon, dy, yr;
    
    // Split the input into month, day and year
    size_t pos = 0;
    while ((pos = date.find('-')) != string::npos) {
        if (month.empty()) {
            month = date.substr(0, pos);
        } else if (day.empty()) {
            day = date.substr(pos + 1);
        }
        date.erase(0, pos + 1);
    }
    
    // Convert the month, day and year to integers
    mon = stoi(month);
    dy = stoi(day);
    yr = stoi(date);

    // Check if the date is valid according to the rules
    if (mon < 1 || mon > 12) return false;
    if ((mon == 2 && dy > 29) || (mon == 4 || mon == 6 || mon == 9 || mon == 11) && dy > 30) return false;
    if (mon % 2 != 0 && dy > 31) return false;

    return true;
}