#include<string>
using namespace std;

bool valid_date(string date) {
    size_t pos = 0, pos2 = 0;
    string month, day, year;

    // Separate the date into month, day and year
    for (pos = 0; pos < date.size(); ++pos) {
        if (isdigit(date[pos])) {
            if (pos == 1) {
                pos2 = pos;
                break;
            }
        } else if (date[pos] == '-') {
            if (pos == 2) {
                month = date.substr(0, pos);
                day = date.substr(pos + 1, pos2 - pos - 1);
                year = date.substr(pos2 + 1);
                break;
            }
        }
    }

    // Check the length of the date
    if (date.size() != 10 || month.size() > 2 || day.size() > 2 || year.size() > 4) {
        return false;
    }

    int m = stoi(month), d = stoi(day), y = stoi(year);
    
    // Check the validity of the date
    if (m < 1 || m > 12)
        return false;

    if ((m == 2 && (d < 1 || d > 29)) ||
        (m == 4 || m == 6 || m == 9 || m == 11) &&
        (d < 1 || d > 30) ||
        (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) &&
        (d < 1 || d > 31))
        return false;

    return true;
}