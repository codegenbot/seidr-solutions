```
#include <iostream>
using namespace std;

bool is_valid_date(string date_string) {
    int month, day, year;
    sscanf(date_string.c_str(), "%d-%d-%d", &month, &day, &year);
    return (month >= 1 && month <= 12) && (day >= 1 && day <= 31) && (year >= 0);
}

int main() {
    string date_string = "04-2003";
    if (!is_valid_date(date_string)) {
        cout << "Invalid date" << endl;
    } else {
        cout << "Valid date" << endl;
    }
    return 0;
}
```