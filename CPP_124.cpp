#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    string temp = "";
    
    // Check if the date string has exactly 10 characters
    if (date.length() != 10)
        return false;
    
    for (int i = 0; i < 2; i++) {
        while (date[i] < '0' || date[i] > '9')
            temp += date[i];
        day = stoi(temp);
        temp = "";
    }
    
    if (day <= 0)
        return false;
    
    for (int i = 2; i < 4; i++) {
        while (date[i] < '0' || date[i] > '9')
            temp += date[i];
        month = stoi(temp);
        temp = "";
    }
    
    if (month <= 0 || month > 12)
        return false;
    
    for (int i = 4; i < 10; i++) {
        while (date[i] < '0' || date[i] > '9')
            temp += date[i];
        year = stoi(temp);
        temp = "";
    }
    
    if (month == 2) {
        if ((year % 4 != 0 && year % 100 == 0) || year % 400 != 0)
            return false;
        else if (day > 29)
            return false;
    } else if (isLeapYear(year)) {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day > 31)
                return false;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day > 30)
                return false;
        }
    } else {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day > 31)
                return false;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day > 30)
                return false;
        }
    }
    
    return true;
}

bool isLeapYear(int year) {
    if (year % 4 != 0)
        return false;
    else if (year % 100 == 0)
        return false;
    else if (year % 400 != 0)
        return false;
    else
        return true;
}