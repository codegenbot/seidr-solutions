#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    string temp;
    size_t pos = 0;
    
    // Find '-' and split into three parts: month-day-year
    for (int i = 0; i < 3; i++) {
        pos = date.find('-');
        if (pos != string::npos) {
            temp = date.substr(0, pos);
            break;
        }
    }

    // Convert month to integer and check if it's valid
    int month_int = stoi(temp);
    if (month_int < 1 || month_int > 12)
        return false;

    // Find '-' again
    pos = date.find('-');
    temp = date.substr(pos + 1);

    // Convert day to integer and check if it's valid
    day = stoi(temp);
    if ((month_int == 2 && day > 29) || (month_int == 4 || month_int == 6 || month_int == 9 || month_int == 11) && day > 30)
        return false;

    // Find '-' again
    pos = date.find('-');
    temp = date.substr(pos + 1);

    // Convert year to integer
    year = stoi(temp);
    
    return true;
}