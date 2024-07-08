#include <string>

using namespace std;

bool valid_date(string date) {
    int day, month, year;
    size_t pos1 = 0, pos2 = 0;
    string mm, dd, yyyy;

    // Separate the date into its components.
    for (size_t i = 0; i < date.length(); ++i) {
        if (date[i] == '-') {
            pos1 = i + 1;
            break;
        }
    }

    mm = date.substr(0, pos1 - 1);
    dd = date.substr(pos1, pos2 - pos1);

    // Check the month.
    if (stoi(mm) < 1 || stoi(mm) > 12)
        return false;

    // Check the day.
    switch (stoi(mm)) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (stoi(dd) < 1 || stoi(dd) > 31)
                return false;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (stoi(dd) < 1 || stoi(dd) > 30)
                return false;
            break;
        case 2:
            if ((stoi(year) % 4 == 0 && stoi(year) % 100 != 0) || stoi(year) % 400 == 0)
                if (stoi(dd) < 1 || stoi(dd) > 29)
                    return false;
            else
                if (stoi(dd) < 1 || stoi(dd) > 28)
                    return false;
            break;
    }

    // Check the year.
    if (date.length() - pos2 - 4 >= 0 && date.substr(pos2, 4).find_first_not_of("0123456789") != string::npos)
        return false;

    return true;
}