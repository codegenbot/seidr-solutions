#include<string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;
    char sep = '-';

    // Split the string into day, month and year
    pos = date.find(sep);
    if (pos != string::npos) {
        month = stoi(date.substr(0, pos));
        day = stoi(date.substr(pos + 1, date.find(sep, pos + 1) - pos - 1));
        year = stoi(date.substr(date.find(sep, pos + 1) + 1));

        // Check if the date is valid
        if (month < 1 || month > 12)
            return false;
        if ((month == 2 && day < 1) || (month == 4 || month == 6 || month == 9 || month == 11) && day < 1)
            return false;
        if (month == 2 && day > 29)
            return false;
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
            return false;
        if (month == 4 || month == 6 || month == 9 || month == 11 && day > 30)
            return false;

    } else {
        // If the date is not in the format mm-dd-yyyy, it's invalid
        return false;
    }

    return true;
}