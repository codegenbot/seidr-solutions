#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    int month, day, year;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (date.size() != 10)
        return false;

    stringstream ss(date);
    ss >> month >> day >> year;
    
    if (month < 1 || month > 12)
        return false;
    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        daysInMonth[1] = 29; // leap year
    
    if (day < 1 || day > daysInMonth[month - 1])
        return false;

    return true;
}