#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_palindrome(string s) {
    return s == string(s.rbegin(), s.rend());
}

string make_palindrome(string str){
    if(str.empty()) return "";
    int n = str.size();
    for(int i=n-1; i>=0; --i){
        if(is_palindrome(str.substr(i))){
            string prefix = str.substr(0,i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return "";
}