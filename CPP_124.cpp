#include <string>
#include <cstdio>
#include <cctype>

bool valid_date(const std::string& date) {
    if (date.empty()) {
        return false;
    }

    for (char c : date) {
        if (!std::isdigit(c) && c != '-') {
            return false;
        }
    }

    if (date.find("--") != std::string::npos) {
        return false;
    }

    int month, day, year;
    if (sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year) != 3) {
        return false;
    }

    if (month < 1 || month > 12 || day < 1 || day > 31 || year < 0) {
        return false;
    }

    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
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
    }

    return true;
}