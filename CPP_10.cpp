#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (!is_palindrome(str.substr(i, j-i+1))) {
            j--;
        } else {
            break;
        }
    }
    return str + string(str.rbegin(),str.rend()).substr(0, j-i+1);
}