#include <string>
#include <vector>

using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;
    string token;

    // Split the date into three parts: month, day and year.
    while ((pos = date.find('-')) != string::npos) {
        token = date.substr(0, pos);
        if (token.length() > 2) {
            return false;
        }
        int temp = stoi(token);
        if (temp < 1 || temp > 12) {
            return false;
        }
        month = temp;

        date.erase(0, pos + 1);

        pos = 0;
    }

    // Split the date into three parts: day and year.
    pos = date.find('-');
    token = date.substr(0, pos);
    int temp = stoi(token);
    if (temp < 1) {
        return false;
    }
    if ((month == 2 && temp > 29) || (month == 4 || month == 6 || month == 9 || month == 11) && temp > 30 || (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && temp > 31) {
        return false;
    }
    day = temp;

    date.erase(0, pos + 1);

    // Split the date into three parts: year.
    token = date;
    int temp_year = stoi(token);
    if (temp_year < 1000 || temp_year > 9999) {
        return false;
    }
    year = temp_year;

    return true;
}