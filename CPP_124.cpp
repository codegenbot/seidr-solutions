```
#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    int month, day, year;
    string temp;

    stringstream ss(date);

    // Parse the date
    getline(ss, temp, '-');
    month = stoi(temp);
    getline(ss, temp, '-');
    day = stoi(temp);
    getline(ss, temp);
    year = stoi(temp);

    // Validate the date
    if (month < 1 || month > 12) return false;
    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
            (day > 30)) return false;

    // Check for valid number of days in February
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            if (day > 29) return false;
        else if (day > 28) return false;
    }

    // Check for valid number of days in months with 31 days
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
            month == 10 || month == 12) &&
        (day > 31)) return false;

    // Check for valid number of days in months with 30 days
    if ((month == 4 || month == 6 || month == 9 || month == 11) &&
        (day > 30)) return false;

    return true;
}