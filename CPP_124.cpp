#include<string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos = 0;
    pos = date.find('-');
    month = stoi(date.substr(0, pos));
    day = stoi(date.substr(pos + 1, date.find('-') - pos - 1));
    year = stoi(date.substr(date.find('-') + 1));

    if (month < 1 || month > 12) {
        return false;
    }

    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
            day > 30) {
        return false;
    }
    
    if ((month == 1 || month == 3 || month == 5 || month == 7 || 
         month == 8 || month == 10 || month == 12) && 
        (day < 1 || day > 31)) {
        return false;
    }

    return true;
}