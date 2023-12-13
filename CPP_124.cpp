#include <iostream>
#include <string>
using namespace std;

bool is_valid_date(const string& date_string) {
    int month, day, year;
    // Parse the date string into month, day, and year.
    size_t pos = date_string.find("-");
    if (pos == string::npos) {
        return false;
    }
    month = stoi(date_string.substr(0, pos));
    day = stoi(date_string.substr(pos + 1, date_string.size() - pos - 1));
    year = stoi(date_string.substr(pos + 2, date_string.size() - pos - 2));

    // Check if the date is valid.
    if (month < 1 || month > 12) {
        return false;
    }
    if (day < 1 || day > std::days_in_month(month, year)) {
        return false;
    }
    if (year < 0) {
        return false;
    }
    return true;
}

int main() {
    string date_string = "04-2003";
    assert(is_valid_date("04-2003") == false);
    return 0;
}