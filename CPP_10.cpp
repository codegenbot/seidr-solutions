#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str) {
    if (is_palindrome(str)) {
        return str + str;
    }
    
    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            break;
        }
        i++;
        j--;
    }
    
    string prefix = str.substr(0, i);
    string suffix = str.substr(i);
    return prefix + reverse(suffix) + prefix;
}