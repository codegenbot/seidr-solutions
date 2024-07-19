#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    int day, month, year;
    char sep = '-';
    
    if(date.find(sep) != string::npos) {
        size_t pos1 = 0, last_pos, pos2;
        pos2 = date.find(sep);
        pos1 = date.find(sep, pos2 + 1);
        
        month = stoi(date.substr(0, pos2));
        day = stoi(date.substr(pos2+1, pos1-pos2-1));
        year = stoi(date.substr(pos1+1));
    } else {
        return false;
    }
    
    if(month < 1 || month > 12) {
        return false;
    }
    
    if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return false;
    } else if(month == 2) {
        if(day > 29) {
            return false;
        }
        else if(year % 4 != 0) {
            if(day > 28) {
                return false;
            }
        }
    } else if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31) {
        return false;
    }
    
    return true;
}