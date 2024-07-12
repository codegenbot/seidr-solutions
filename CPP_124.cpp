#include<string>
using namespace std;

bool valid_date(string date) {
    int day, month, year;
    char delimiter = '-';
    
    if(date.find(delimiter) != string::npos){
        size_t pos = 0;
        pos = date.find(delimiter);
        month = stoi(date.substr(0,pos));
        pos += 3;
        day = stoi(date.substr(pos,date.find(delimiter)-pos));
        year = stoi(date.substr(date.find(delimiter)+1));
    }else{
        return false;
    }
    
    if(month < 1 || month > 12) {
        return false;
    }
    
    if((month == 2 && (day < 1 || day > 29)) ||
       ((month % 4 != 0 && month % 100 != 0 || month % 400 != 0) && (day < 1 || day > 28))||
       ((month % 4 == 0 && month % 100 != 0) && (day < 1 || day > 29)) ||
       ((month % 100 == 0) && (day < 1 || day > 28))||(day < 1 || day > 31)){
        return false;
    }
    
    if(month == 4 || month == 6 || month == 9 || month == 11){
        if(day < 1 || day > 30){
            return false;
        }
    }else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        if(day < 1 || day > 31){
            return false;
        }
    }
    
    return true;
}