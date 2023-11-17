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
    vector<string> symbol = {"i","v","x","l","c","d","m"};
    int scale = 1000;
    for(int i = 6;i>=0;i-=2){
        int digit = number/scale;
        if(digit!=0){
            if(digit<=3){
                result.append(digit,symbol[i]);
            }else if(digit == 4){
                result.append(1,symbol[i]);
                result.append(1,symbol[i+1]);
            }else if(digit == 5){
                result.append(1,symbol[i+1]);
            }else if(digit <= 8){
                result.append(1,symbol[i+1]);
                result.append(digit-5,symbol[i]);
            }else if(digit == 9){
                result.append(1,symbol[i]);
                result.append(1,symbol[i+2]);
            }
        }
        number = number%scale;
        scale /= 10;
    }
    return result;
}
