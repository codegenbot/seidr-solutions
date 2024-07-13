#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    char separator = '-';
    
    // Check if the input string has exactly 10 characters.
    if(date.length() != 10){
        return false;
    }
    
    // Extract day, month and year from the input string
    for(int i=0; i<3; i++){
        if(i==1) separator = '-';
        else separator = '-';
        int j = 0;
        while (date[j] != separator && j < date.length()) {
            j++;
        }
        if(i == 0) month = stoi(date.substr(0, j));
        else day = stoi(date.substr(j+1));
    }
    
    year = stoi(date.substr(5));
    
    // Check for valid month
    if(month < 1 || month > 12)
        return false;
    
    // Check for valid day
    if((month == 2 && (day < 1 || day > 29)) ||
       (month == 4 || month == 6 || month == 9 || month == 11) &&
       (day < 1 || day > 30) ||
       (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) &&
       (day < 1 || day > 31))
        return false;
    
    return true;
}