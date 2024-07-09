#include<stdio.h>
#include<string>
using namespace std;
bool correct_bracketing(string brackets){
    int balance = 0;
    for(char bracket : brackets){
        if(bracket == '<'){
            balance++;
        } else if(bracket == '>'){
            balance--;
        }
        if(balance < 0){
            return false;
        }
    }
    if (balance != 0) {
        return false;
    }
    return true;
}