#include <string>
#include <cctype>

using namespace std;

bool valid_date(string date) {
    int month, day, year = 0;
    string temp = "";

    for (int i = 0; i < date.size(); i++) {
        if (isdigit(date[i])) {
            temp += date[i];
        } else if (date[i] == '-') {
            if (temp != "") {
                if (month == 0) {
                    month = stoi(temp);
                    temp = "";
                } else if (year == 0) {
                    year = stoi(temp);
                    temp = "";
                }
                if ((month < 1 || month > 12) || (day < 1) || (temp.size() != 4 && temp.size() != 8)) {
                    return false;
                }
            } else {
                return false;
            }
        }
    }

    if (temp == "") {
        return false;
    }

    day = stoi(temp);

    if ((month < 1 || month > 12) || (day < 1) || (day > (month == 2 ? 29 : month % 3 != 0 ? 31 : 30))) {
        return false;
    }

    return true;
}