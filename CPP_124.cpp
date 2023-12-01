#include <iostream>
#include <string>
using namespace std;

bool valid_date(string date) {
    // Check if the date string is empty
    if (date.empty()) {
        return false;
    }
    
    // Split the date string into day, month, and year
    string delimiter = "-";
    size_t pos = 0;
    string day, month, year;
    
    // Get the day
    pos = date.find(delimiter);
    if (pos == string::npos) {
        return false;
    }
    day = date.substr(0, pos);
    date.erase(0, pos + delimiter.length());
    
    // Get the month
    pos = date.find(delimiter);
    if (pos == string::npos) {
        return false;
    }
    month = date.substr(0, pos);
    date.erase(0, pos + delimiter.length());
    
    // Get the year
    year = date;
    
    // Convert day, month, and year to integers
    int dayInt = stoi(day);
    int monthInt = stoi(month);
    int yearInt = stoi(year);
    
    // Check if the month is valid
    if (monthInt < 1 || monthInt > 12) {
        return false;
    }
    
    // Check if the day is valid based on the month
    if (monthInt == 2) {
        // Check for leap year
        bool leapYear = (yearInt % 4 == 0 && yearInt % 100 != 0) || (yearInt % 400 == 0);
        if (dayInt < 1 || dayInt > (leapYear ? 29 : 28)) {
            return false;
        }
    } else if (monthInt == 4 || monthInt == 6 || monthInt == 9 || monthInt == 11) {
        if (dayInt < 1 || dayInt > 30) {
            return false;
        }
    } else {
        if (dayInt < 1 || dayInt > 31) {
            return false;
        }
    }
    
    // All validation checks passed, return true
    return true;
}

int main() {
    cout << valid_date("03-11-2000") << endl;    // true
    cout << valid_date("15-01-2012") << endl;    // false
    cout << valid_date("04-0-2040") << endl;     // false
    cout << valid_date("06-04-2020") << endl;    // true
    cout << valid_date("06/04/2020") << endl;    // false
    
    return 0;
}