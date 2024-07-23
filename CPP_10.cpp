#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)){
        return str;
    }
    
    int i = 0, j = str.length() - 1;
    while(i <= j && str[i] == str[j]){
        i++;
        j--;
    }
    
    string prefix = str.substr(0, i);
    string suffix = str.substr(j + 1);
    string middle = str.substr(i, j-i+1);
    std::reverse(middle.begin(), middle.end());
    return prefix + middle + suffix;
}