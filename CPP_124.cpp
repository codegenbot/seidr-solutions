#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    istringstream iss(date);
    string month, day, year;
    iss >> month >> day >> year;

    if (month.length() != 2 || day.length() != 2 || year.length() != 4)
        return false;

    int mon = stoi(month), dy = stoi(day), yr = stoi(year);

    if (mon < 1 || mon > 12)
        return false;

    if ((mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) &&
        (dy < 1 || dy > 31))
        return false;
    else if ((mon == 4 || mon == 6 || mon == 9 || mon == 11) && (dy < 1 || dy > 30))
        return false;
    else if (mon == 2) {
        if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0)
            return dy >= 1 && dy <= 29;
        else
            return dy >= 1 && dy <= 28;
    }

    return true;
}