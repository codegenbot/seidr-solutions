#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int left = 0, right = str.length() - 1;
    
    while (left < right && str[left] == str[right]) {
        left++;
        right--;
    }
    
    string prefix = str.substr(0, left);
    string suffix = str.substr(left);
    reverse(suffix.begin(), suffix.end());
    
    return prefix + suffix;
}