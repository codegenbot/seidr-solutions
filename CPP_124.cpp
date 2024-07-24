#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    int day, month, year;
    string s = "";
    
    for (int i = 0; i < date.length(); i++) {
        if (date[i] == '-') {
            if (!s.empty()) {
                stringstream ss(s);
                ss >> month >> day >> year;
                if (month < 1 || month > 12) return false;
                if ((month == 2 && day > 29) ||
                    (month == 4 || month == 6 || month == 9 || month == 11) &&
                    day > 30) return false;
                if (month in {1,3,5,7,8,10,12} && day > 31) return false;
                if (year < 1) return false;
                s = "";
            }
            s += date[i+1];
        } else {
            s += date[i];
        }
    }
    
    stringstream ss(s);
    ss >> month >> day >> year;
    if (month < 1 || month > 12) return false;
    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
        day > 30) return false;
    if (month in {1,3,5,7,8,10,12} && day > 31) return false;
    if (year < 1) return false;
    
    return true;
}