#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool is_palindrome(string str){
    int i = 0, j = str.size() - 1;
    while (i < j){
        if (str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string make_palindrome(string str){
    if(str.empty()) return "";
    int n = str.size();
    for(int i=n-1; i>=0; i--){
        if(is_palindrome(str.substr(i))){
            string prefix = str.substr(0,i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return "";
}