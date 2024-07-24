#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    string temp = "";
    for (int i = 0; i < date.length(); i++) {
        if (isdigit(date[i])) {
            temp += date[i];
        } else if (temp != "") {
            if (i == 2) {
                year = stoi(temp);
                temp = "";
            } else if (i == 5) {
                month = stoi(temp);
                temp = "";
            } else if (i == date.length() - 4) {
                day = stoi(temp);
                break;
            }
        }
    }

    if (temp != "") {
        return false;
    }

    if (month < 1 || month > 12)
        return false;

    if ((month == 2 && day > 29) || (month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;

    if (month in {1,3,5,7,8,10,12} && day > 31)
        return false;

    return true;
}