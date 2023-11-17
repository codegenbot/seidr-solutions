/*
Given a positive integer, obtain its roman numeral equivalent as a string,
and return it in lowercase.
Restrictions: 1 <= num <= 1000

Examples:
>>> int_to_mini_roman(19) == "xix"
>>> int_to_mini_roman(152) == "clii"
>>> int_to_mini_roman(426) == "cdxxvi"
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
string int_to_mini_romank(int number){
    string result;
    vector<string> roman = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    vector<int> num = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    for(int i = 0; i < num.size(); i++){
        while(number >= num[i]){
            number -= num[i];
            result += roman[i];
        }
    }
    return result;
}
