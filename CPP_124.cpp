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
    string token;
    int parts[3];
    int index = 0;

    while ((pos = date.find(delimiter)) != string::npos) {
        token = date.substr(0, pos);
        parts[index] = stoi(token);
        date.erase(0, pos + delimiter.length());
        index++;
    }
    parts[index] = stoi(date);

    // Check if the number of days is valid for the given month
    int month = parts[0];
    int day = parts[1];
    int year = parts[2];

    if (month >= 1 && month <= 12) {
        if (month == 2) {
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                if (day >= 1 && day <= 29) {
                    return true;
                }
            } else {
                if (day >= 1 && day <= 28) {
                    return true;
                }
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day >= 1 && day <= 30) {
                return true;
            }
        } else {
            if (day >= 1 && day <= 31) {
                return true;
            }
        }
    }

    return false;
}