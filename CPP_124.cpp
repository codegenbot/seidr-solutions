int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    size_t pos1 = date.find('-');
    size_t pos2 = date.rfind('-');

    if (pos1 == string::npos || pos2 == string::npos || pos1 == pos2) {
        return false;
    }

    string sDay = date.substr(pos1 + 1, pos2 - pos1 - 1);
    string sMonth = date.substr(0, pos1);
    string sYear = date.substr(pos2 + 1);

    int day = atoi(sDay.c_str());
    int month = atoi(sMonth.c_str());
    int year = atoi(sYear.c_str());

    if (day < 1 || month < 1 || month > 12) {
        return false;
    }

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if (day > 29) {
                return false;
            }
        } else {
            if (day > 28) {
                return false;
            }
        }
    } else {
        if (day > daysInMonth[month]) {
            return false;
        }
    }

    return true;
}