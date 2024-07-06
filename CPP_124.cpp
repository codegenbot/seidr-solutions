#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    int month, day, year;
    size_t pos = 0;
    
    // split the string into three parts: month, day and year
    pos = date.find('-');
    if (pos == string::npos) return false;  // not in the correct format
    string part1 = date.substr(0, pos);
    pos = date.find('-', pos + 1);
    if (pos == string::npos) return false;  // not in the correct format
    string part2 = date.substr(pos - part1.length(), pos - part1.length() + 3);
    string part3 = date.substr(pos + 1);
    
    // convert strings to integers and check validity
    month = stoi(part1);
    day = stoi(part2);
    year = stoi(part3);

    if (month < 1 || month > 12) return false;
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31) return false;
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) return false;
    if (month == 2 && (day > 29 || (day == 29 && year % 4 != 0))) return false;

    return true;
}