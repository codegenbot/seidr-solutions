#include <string>

using namespace std;

bool valid_date(string date) {
    int day, month, year;
    string temp = "";
    
    for(int i=0; i<date.length(); i++) {
        if(date[i] != '-') {
            temp += date[i];
        } else {
            if(temp.empty()) continue;
            if(i == 2) {
                year = stoi(temp);
                temp = "";
            } else if(i == 5) {
                month = stoi(temp);
                temp = "";
            } else {
                day = stoi(temp);
                temp = "";
            }
        }
    }
    
    if(month < 1 || month > 12) return false;
    if(day < 1) return false;
    
    if(month == 2) {
        if(year % 4 != 0) return day <= 28;
        else if(year % 100 != 0) return day <= 29;
        else if(year % 400 != 0) return day <= 28;
        else return day <= 29;
    } 
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if(day > 31) return false;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11) {
        if(day > 30) return false;
    }
    
    if(year < 1) return false;
    
    return true;
}