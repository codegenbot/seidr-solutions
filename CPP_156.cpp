#include <iostream>
#include <vector>
using namespace std;

string int_to_mini_roman(int number){
    vector<string> roman = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string result = "";
    
    for(int i=0; i<values.size(); i++){
        while(number >= values[i]){
            result += roman[i];
            number -= values[i];
        }
    }
    
    return result;
}

int main(){
    assert(int_to_mini_roman(1000) == "m");
    
    return 0;
}