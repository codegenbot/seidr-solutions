#include<string>
using namespace std;

bool valid_date(string date) {
    int dashCount = 0;
    for (int i = 0; i < date.length(); i++) {
        if (date[i] == '-') {
            dashCount++;
        }
    }
    
    if (dashCount != 2) return false;
    
    string month, day, year;
    for (int i = 0; i < date.length(); i++) {
        if (date[i] == '-') {
            break;
        } else {
            if (i < 2) {
                month += date[i];
            } else if (i < 5) {
                day += date[i];
            } else {
                year += date[i];
            }
        }
    }
    
    int m, d, y;
    m = stoi(month);
    d = stoi(day);
    y = stoi(year);
    
    if (m < 1 || m > 12) return false;
    if ((m == 2 && (d < 1 || d > 29)) ||
        (m == 4 || m == 6 || m == 9 || m == 11 &&
         (d < 1 || d > 30)) ||
        (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 &&
         (d < 1 || d > 31))) return false;
    
    return true;
}