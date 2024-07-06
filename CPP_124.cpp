#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    int month, day, year;
    string token1, token2, token3;

    // Split the date into three parts: mm-dd-yyyy
    istringstream iss(date);
    getline(iss, token1, '-');
    getline(iss, token2, '-');
    getline(iss, token3);

    // Convert the strings to integers
    month = stoi(token1);
    day = stoi(token2);
    year = stoi(token3);

    // Check if the date is valid according to the rules
    if (month < 1 || month > 12) {
        return false;
    }
    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
            day > 30) ||
        (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) &&
            day > 31) {
        return false;
    }
    if (day < 1) {
        return false;
    }

    return true;
}