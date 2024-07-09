#include <string>
using namespace std;

bool valid_date(string date) {
    int year = 0, month = 0, day = 0;
    string temp;

    // splitting the date into mm-dd-yyyy format
    for (int i = 0; i < 10; i++) {
        if (!date[i]) break;
        if (i == 1 || i == 3 || i == 6) month = stoi(temp);
        else if (i == 4) temp = "";
        else if (i == 8) day = stoi(temp), year = stoi(date.substr(i));
    }

    // checking for valid date
    if (date.empty() || month < 1 || month > 12 || day < 1 || day > ((month == 2 && isLeap(year)) ? 29 : (month % 2 != 0) ? 31 : 30))
        return false;

    return true;
}

// helper function to check if the year is a leap year
bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}