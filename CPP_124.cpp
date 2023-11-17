/*
You have to write a function which validates a given date string and
returns true if the date is valid otherwise false.
The date is valid if all of the following rules are satisfied:
1. The date string is not empty.
2. The number of days is not less than 1 or higher than 31 days for months 1,3,5,7,8,10,12. And the number of days is not less than 1 or higher than 30 days for months 4,6,9,11. And, the number of days is not less than 1 or higher than 29 for the month 2.
3. The months should not be less than 1 or higher than 12.
4. The date should be in the format: mm-dd-yyyy

for example: 
valid_date("03-11-2000") => true

valid_date("15-01-2012") => false

valid_date("04-0-2040") => false

valid_date("06-04-2020") => true

valid_date("06/04/2020") => false
*/
#include<stdio.h>
#include<string>
using namespace std;
bool valid_date(string date){
    if(date.length()==0)
        return false;
    string s = date;
    int day = stoi(s.substr(0,2));
    int month = stoi(s.substr(3,2));
    int year = stoi(s.substr(6,4));
    if(day<1 || day>31 || month<1 || month>12 || year<0)
        return false;
    if(day>30 && (month==4 || month==6 || month==9 || month==11))
        return false;
    if(day>29 && month==2)
        return false;
    return true;
}
int main(){
    string date;
    cout<<"Enter the date: ";
    cin>>date;
    if(valid_date(date))
        cout<<"The date is valid\n";
    else
        cout<<"The date is invalid\n";
    return 0;
}
