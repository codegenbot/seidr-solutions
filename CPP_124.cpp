#include <string>
using namespace std;

bool valid_date(string date) {
    int month, day, year;
    char mm[3], dd[3];

    // Extract month and day from input string
    for (int i = 0; i < 2; i++) {
        if (date[i] == '-') break;
        mm[i] = date[i];
    }
    mm[2] = '\0';
    for (int i = 3; i < 5; i++) {
        if (date[i] == '-') break;
        dd[i-3] = date[i];
    }
    dd[2] = '\0';

    // Convert month and day to integers
    month = atoi(mm);
    day = atoi(dd);

    // Check for valid month
    if (month < 1 || month > 12) return false;

    // Check for valid day based on month
    if ((month == 2 && day > 29) ||
        (month == 4 || month == 6 || month == 9 || month == 11) &&
        (day > 30)) return false;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day > 31) return false;
    }

    // Check for valid year
    int pos = date.find('-') + 2;
    char yyyy[5];
    for (int i = 0; i < 4; i++) {
        yyyy[i] = date[pos+i];
    }
    yyyy[4] = '\0';
    int year_val = atoi(yyyy);
    if (year_val < 1) return false;

    return true;
}