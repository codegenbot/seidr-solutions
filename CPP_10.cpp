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
    while (i < j && str[i] == str[j]) {
        i++;
        j--;
    }
    
    string prefix = str.substr(0, i);
    string suffix = str.substr(j+1);
    
    return str + is_palindrome(suffix) ? "" : new string(suffix.rbegin(), suffix.rend()).append(prefix).append(prefix);
}