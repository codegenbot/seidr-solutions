#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    char separator = '-';
    
    if (date.length() != 10)
        return false;
        
    string dayStr, monthStr, yearStr;
    for (int i = 0; i < 2; i++) {
        dayStr += date[i];
    }
    for (int i = 3; i < 5; i++) {
        monthStr += date[i];
    }
    for (int i = 6; i < 10; i++) {
        yearStr += date[i];
    }

    try {
        day = stoi(dayStr);
        month = stoi(monthStr);
        year = stoi(yearStr);
    } catch (...) {
        return false;
    }

    if (day < 1 || day > 31)
        return false;

    if (month < 1 || month > 12)
        return false;

    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
         (day > 30))
        return false;
    
    if (month < 3)
        return (day <= 31);
    else if (month < 8)
        return (day <= 31) || (day <= 30 && month % 2 != 0) || (day <= 29 && month == 7);
    else
        return (day <= 31) || (day <= 30 && (month % 2 != 0 || month > 7)) || (day <= 28 && month == 8);

    return true;
}