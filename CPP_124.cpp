#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    char dash;

    // Split the string by '-'
    sscanf(date.c_str(), "%02d-%d-%04d", &month, &day, &year);

    // Check if the date is not empty
    if (date.empty()) return false;

    // Check the month
    if (month < 1 || month > 12) return false;

    // Check the day based on the month
    if ((month == 2 && day > 29) ||
        (month in {4,6,9,11} && day > 30) ||
        (month in {1,3,5,7,8,10,12} && day > 31)) return false;

    // Check the day is not less than 1
    if (day < 1) return false;

    return true;
}