#include <iostream>
#include <string>

bool valid_date(std::string date) {
    if(date.empty()){
        return false;
    }
    
    int month, day, year;
    sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year);
    
    if(month < 1 || month > 12){
        return false;
    }
    
    if(day < 1 || day > 31){
        return false;
    }
    
    if(month == 4 || month == 6 || month == 9 || month == 11){
        if(day > 30){
            return false;
        }
    }
    
    if(month == 2){
        if(day > 29){
            return false;
        }
    }
    
    return true;
}

int main() {
    // test cases and assertions here
}