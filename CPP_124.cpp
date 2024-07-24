#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;
    string token;

    // Split the date into mm-dd-yyyy format
    while ((pos = date.find('-')) != string::npos) {
        token = date.substr(0, pos);
        if (token.length() > 1 && !isdigit(token[0])) return false;
        day = stoi(token);
        date.erase(0, pos + 1);

        pos = date.find('-');
    }

    // Convert the remaining string to year
    token = date;
    if (token.length() > 3 && !isdigit(token[0]) || token.length() < 4) return false;
    year = stoi(token);

    // Validate the day, month and year
    if (day < 1 || day > 31) return false;
    if ((month = stoi(date.substr(0, date.find('-')))) < 1 || month > 12) return false;

    // Check for leap year
    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if ((month == 2) && (day > 29)) return false;
    else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day > 31)) return false;
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30)) return false;
    else if (month == 2 && isLeapYear && day > 29) return false;

    return true;
}