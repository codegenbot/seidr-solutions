```cpp
#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    int day, month, year;
    string token[3];

    // Split the input string into mm-dd-yyyy format
    istringstream iss(date);
    for (int i = 0; i < 3; ++i) {
        getline(iss, token[i], '-');
    }

    // Convert the strings to integers
    month = stoi(token[0]);
    day = stoi(token[1]);
    year = stoi(token[2]);

    // Validate the date
    if (month < 1 || month > 12)
        return false;

    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
        return false;
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;
    else if (month == 2 && day > 28)
        return false;

    // Check for invalid days
    if ((day < 1) || (day > 31))
        return false;

    return true;
}