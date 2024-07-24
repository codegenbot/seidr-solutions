#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    char divider;
    sscanf(date.c_str(), "%02d-%02d-%04d", &month, &day, &year);
    
    if (date.empty()) return false;
    
    if ((month < 1 || month > 12) 
        || (year < 1)) return false;
        
    if (month == 2) {
        if (year % 4 != 0 && year % 100 == 0) return false;
        else if (year % 400 != 0) return day <= 28;
        else return day <= 29;
    } 
    else if ((month < 1 || month > 12) || (day < 1)) return false;
    
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if(day > 31) return false;
            break;
        case 4: case 6: case 9: case 11:
            if(day > 30) return false;
            break;
    }
    
    return true;
}