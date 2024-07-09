#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    int day, month, year;
    string temp;

    // Split the date into parts
    istringstream iss(date);
    if (!(iss >> month >> temp >> day >> temp >> year)) return false;

    // Check for invalid months
    if (month < 1 || month > 12) return false;

    // Check for valid days according to month
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: if (day < 1 || day > 31) return false; break;
        case 4:
        case 6:
        case 9:
        case 11: if (day < 1 || day > 30) return false; break;
        case 2: // February
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                if (day < 1 || day > 29) return false;
            else if (day < 1 || day > 28) return false;
    }

    return true;
}