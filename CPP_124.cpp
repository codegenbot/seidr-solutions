#include <string>
using namespace std;

bool valid_date(string date) {
    int dashCount = 0;
    string monthStr, dayStr, yearStr;
    
    for (int i = 0; i < date.length(); i++) {
        if (date[i] == '-') {
            dashCount++;
            continue;
        }
        
        switch (dashCount) {
            case 0:
                monthStr += date[i];
                break;
            case 1:
                dayStr += date[i];
                break;
            case 2:
                yearStr += date[i];
                break;
        }
    }
    
    int month = stoi(monthStr);
    int day = stoi(dayStr);
    int year = stoi(yearStr);
    
    if (month < 1 || month > 12) return false;
    
    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
            (day > 30)) {
        return false;
    }
    
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day > 31) return false;
    }
    
    return true;
}