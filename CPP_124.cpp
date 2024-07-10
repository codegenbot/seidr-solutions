#include <string>
#include <sstream>

using namespace std;

bool valid_date(string date) {
    istringstream iss(date);
    string month, day, year;
    iss >> month >> day >> year;

    if (month.length() != 2 || day.length() != 2 || year.length() != 4)
        return false;

    int mon = stoi(month), dy = stoi(day), yea = stoi(year);

    if(mon < 1 || mon > 12)
        return false;

    if((mon == 2 && (dy < 1 || dy > 29)) ||
       ((mon % 2 != 0) && (dy < 1 || dy > 31)) ||
       ((mon % 2 == 0) && (dy < 1 || dy > 30)))
        return false;

    if(yea < 1000 || yea > 9999)
        return false;

    return true;
}