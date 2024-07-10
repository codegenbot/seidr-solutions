#include <string>
using namespace std;

bool isLeapYear(int year);
bool valid_date(string date) {
    int day, month, year;
    string temp = "";
    for (int i = 0; i < date.length(); i++) {
        if (date[i] == '-') {
            if (!temp.empty()) {
                if (stoi(temp) > 12) return false;
                if (stoi(temp) % 4 == 0 && stoi(temp) != 100 && stoi(temp) % 100 == 0 && stoi(temp) < 2000) {
                    if (stoi(temp) % 400 != 0) return false;
                }
                temp = "";
            }
        } else if (isdigit(date[i])) {
            temp += date[i];
        }
    }
    month = stoi(temp);
    
    temp = "";
    for (int i = 0; i < date.length(); i++) {
        if (date[i] == '-') {
            if (!temp.empty()) {
                day = stoi(temp);
                if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
                    return false;
                if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
                    return false;
                if (month == 2 && (day > 29 || (day == 29 && !isLeapYear(stoi(temp))))
                    return false;
                temp = "";
            }
        } else if (isdigit(date[i])) {
            temp += date[i];
        }
    }
    year = stoi(temp);

    return true;
}

bool isLeapYear(int year) {
    if (year % 4 != 0)
        return false;
    if (year % 100 != 0)
        return true;
    if (year % 400 != 0)
        return false;
    return true;
}