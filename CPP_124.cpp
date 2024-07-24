#include <string>
using namespace std;

bool valid_date(string date) {
    size_t found = 0;
    string token[3];

    // Split the date into three parts: month, day and year.
    for (int i = 0; i < 3; i++) {
        found = date.find('-');
        token[i] = date.substr(0, found);
        date.erase(0, found + 1);
        if (!date.empty())
            found = date.find('-');
    }

    // Convert the month to integer
    int month = stoi(token[0]);

    // Validate month
    if (month < 1 || month > 12) {
        return false;
    }

    // Convert day to integer
    int day = stoi(token[1]);

    // Validate day
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;

    if (month == 2) {
        if (day > 29)
            return false;
    }

    else if (day > (month == 1 ? 31 : (month == 3 ? 31 : (month == 5 || month == 7 || month == 8 || month == 10 || month == 12) ? 31 : 30)))
        return false;

    return true;
}