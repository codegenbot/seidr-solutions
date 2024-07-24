#include <string>
using namespace std;

bool valid_date(string date) {
    string month_day_year[3];
    int year, month, day;
    size_t pos = 0;
    
    while ((pos = date.find('-')) != string::npos) {
        month_day_year[0] = date.substr(0, pos);
        date.erase(0, pos + 1);
        
        if (date.empty())
            break;
        
        pos = date.find('-');
        month_day_year[1] = date.substr(0, pos);
        date.erase(0, pos + 1);
    }
    
    month_day_year[2] = date;
    
    year = stoi(month_day_year[2]);
    string temp = month_day_year[1];
    month_day_year[1] = month_day_year[0];
    month_day_year[0] = temp;
    int m = stoi(month_day_year[0]);
    day = stoi(month_day_year[1]);
    
    if (m < 1 || m > 12)
        return false;
    
    if ((m == 2 && day > 29) || (m == 4 || m == 6 || m == 9 || m == 11) && day > 30)
        return false;
    
    else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && day > 31)
        return false;
    
    return true;
}

int main() {
    cout << valid_date("03-11-2000"); // true
    cout << endl;
    cout << valid_date("15-01-2012"); // false
    cout << endl;
    cout << valid_date("04-0-2040"); // false
    cout << endl;
    cout << valid_date("06-04-2020"); // true
    cout << endl;
    cout << valid_date("06/04/2020"); // false
    return 0;
}