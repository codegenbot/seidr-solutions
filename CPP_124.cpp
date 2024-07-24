#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    istringstream iss(date);
    string month, day, year;
    
    getline(iss, month, '-');
    getline(iss, day, '-');
    iss >> year;
    
    int m = stoi(month);
    int d = stoi(day);
    int y = stoi(year);
    
    if (m < 1 || m > 12) return false;
    if ((m == 2 && d > 29) ||
        (m == 4 || m == 6 || m == 9 || m == 11) &&
            (d > 30)) return false;

    // Check for valid number of days in February
    if (m == 2) {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            if (d > 29) return false;
        else if (d > 28) return false;
    }

    // Check for valid number of days in months with 31 days
    if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 ||
            m == 10 || m == 12) &&
        (d > 31)) return false;

    // Check for valid number of days in months with 30 days
    if ((m == 4 || m == 6 || m == 9 || m == 11) &&
        (d > 30)) return false;

    return true;
}