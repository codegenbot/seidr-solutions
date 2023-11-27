#include <stdio.h>
#include <string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(), str.rend());
    return s == str;
}

string make_palindrome(string str){
    int n = str.length();
    int i = n - 1;
    while (i >= 0 && str[i] == str[n - 1 - i]) {
        i--;
    }
    string suffix = str.substr(i + 1);
    string prefix = str.substr(0, i + 1);
    string palindrome = str + string(prefix.rbegin(), prefix.rend()) + suffix;
    return palindrome;
}