#include <iostream>
#include <string>

using namespace std;

bool valid_date(string date){
    if(date.empty()){
        return false;
    }
    
    int month, day, year;
    sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year);
    
    if(month < 1 || month > 12){
        return false;
    }
    
    if(month == 2){
        if(day < 1 || day > 29){
            return false;
        }
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11){
        if(day < 1 || day > 30){
            return false;
        }
    }
    else{
        if(day < 1 || day > 31){
            return false;
        }
    }
    
    return true;
}

int main() {
    cout << valid_date("02-01-2021") << endl;
    cout << valid_date("04-2003") << endl;
    return 0;
}