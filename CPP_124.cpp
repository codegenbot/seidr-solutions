#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    char dash[3];
    
    // Find the position of the first and second dashes
    for (int i = 0; i < 2; i++) {
        dash[i] = date[4 + i];
    }
    dash[3] = '\0';
    
    // Convert the date string to day, month, year
    sscanf(date.c_str(), "%02d-%s-%d", &month, dash, &year);
    day = stoi(date.substr(0, 2));
    
    // Check if the date is valid
    if (date.empty() || !isdigit(month) || !isdigit(day) || !isdigit(year)) {
        return false;
    }
    
    if (month < 1 || month > 12) {
        return false;
    }
    
    if ((month == 2 && day > 29) || 
        (month == 4 || month == 6 || month == 9 || month == 11) && day > 30 || 
        (month != 2 && day > 31)) {
        return false;
    }
    
    return true;
}