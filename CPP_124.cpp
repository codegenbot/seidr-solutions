#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    char dash1, dash2;

    // Find the position of '-' and split the string into day, month and year.
    size_t pos = 0;
    while ((pos = date.find('-')) != string::npos) {
        if (pos == 0 || pos == date.size() - 1)
            return false; // Date format is incorrect

        if (pos < date.size() - 3 && date.substr(pos, 3).find('-') != string::npos)
            return false; // More than one '-'

        dash1 = date[pos];
        pos = date.find('-', pos + 1);
    }

    // Extract day, month and year from the given date.
    if (pos < date.size() - 4) {
        day = stoi(date.substr(0, pos));
        month = stoi(date.substr(pos + 1, 2));
        year = stoi(date.substr(pos + 3));

        // Check for valid date based on the rules provided.
        if (day < 1 || day > 31)
            return false;
        else if ((month == 2 && day > 29) || (month in {4,6,9,11} && day > 30) || (month % 3 != 0 && day > 31))
            return false;

        // Check for valid month.
        if (month < 1 || month > 12)
            return false;
    }

    return true; // The date is valid.
}