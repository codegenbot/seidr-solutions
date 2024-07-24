#include <string>
#include <vector>

using namespace std;

bool valid_date(string date) {
    string temp;
    vector<string> tokens;
    
    for(int i = 0; i < date.length(); i++){
        if(date[i] == '-'){
            continue;
        }
        if(date[i] != '-'){
            temp += date[i];
        }else{
            tokens.push_back(temp);
            temp = "";
        }
    }
    tokens.push_back(temp);
    
    int day, month, year;
    
    day = stoi(tokens[1]);
    month = stoi(tokens[0]);
    year = stoi(tokens[2]);
    
    if(month < 1 || month > 12)
        return false;
    
    if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;
    if(month == 2){
        if(day > 29)
            return false;
        if(year % 4 != 0)
            return false;
        if((year % 100 == 0) && (year % 400 != 0))
            return false;
    }
    
    if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
        return false;
    
    return true;
}

int main(){
    cout << valid_date("03-11-2000") << endl; //true
    cout << valid_date("15-01-2012") << endl; //false
    cout << valid_date("04-0-2040") << endl; //false
    cout << valid_date("06-04-2020") << endl; //true
    return 0;
}