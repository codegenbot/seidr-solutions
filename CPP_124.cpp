#include <string>
using namespace std;

bool valid_date(string date) {
    int month, day, year;
    char slash[3];
    
    // Separate the date into month, day and year
    sscanf(date.c_str(), "%02d-%02d-%04d", &month, &day, &year);
    
    // Check if the month is within 1-12
    if (month < 1 || month > 12) {
        return false;
    }
    
    // Month-specific checks for days
    switch(month) {
        case 2:
            return day >= 1 && day <= 29;
        case 4:
        case 6:
        case 9:
        case 11:
            return day >= 1 && day <= 30;
        default:
            return day >= 1 && day <= 31;
    }
}