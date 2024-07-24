#include <string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    char separator = '-';
    
    if(date.find(separator)!=1 && date.find(separator)!=3){
        return false; // wrong format
    }
    
    sscanf(date.c_str(), "%02d%01d%04d", &month, &day, &year);
    
    if(month<1 || month>12) {
        return false;
    }
    
    if((month==2 && (day<1 || day>29)) ||
       (month==4 || month==6 || month==9 || month==11) && (day<1 || day>30) ||
       (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) && (day<1 || day>31)) {
        return false;
    }
    
    return true;
}