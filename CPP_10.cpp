#include <stdio.h>
#include <string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(), str.rend());
    return s == str;
}

string make_palindrome(string str){
    int len = str.length();
    int i = len - 1;
    while (i >= 0 && str[i] == str[len - 1 - i]) {
        i--;
    }
    string prefix = str.substr(0, i + 1);
    string palindrome = str + string(prefix.rbegin(), prefix.rend());
    return palindrome;
}