#include <string>

bool valid_date(std::string date) {
    if (date.empty()) {
        return false;
    }

    int month, day, year;
    if (sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year) != 3) {
        return false;
    }

    if (month < 1 || month > 12) {
        return false;
    }

    if (day < 1) {
        return false;
    }

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (day > 31) {
                return false;
            }
            break;
        case 4: case 6: case 9: case 11:
            if (day > 30) {
                return false;
            }
            break;
        case 2:
            if (day > 29) {
                return false;
            }
            break;
        default:
            return false;
    }

    return true;
}