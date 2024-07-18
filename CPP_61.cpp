#include<stdio.h>
#include<string>
using namespace std;
bool correct_bracketing(string brackets){
    int balance = 0;
    for (char c : brackets) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            if (balance == 0) {
                return false;
            }
            balance--;
        }
    }
    return balance == 0;
}