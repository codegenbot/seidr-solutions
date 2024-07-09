```cpp
#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int i=str.length()-1;
    while(i>=0 && str[i-1]==str[i])
        i--;
    if(i<0)
        return str+str;
    int len = str.length();
    if(len % 2 == 1) {
        return str.substr(0, (len / 2) + 1) + 
               std::string(str.substr(len / 2, 1).rbegin(), str.substr(len / 2, 1).rbegin() + 1) +
               std::string(str.substr(len / 2, 1).rbegin(), str.substr(len / 2, 1).rbegin() + 1) + 
               str.substr((len / 2) + 1);
    } else {
        return str.substr(0, len / 2) + 
               std::string(str.substr(len / 2, 1).rbegin(), str.substr(len / 2, 1).rbegin() + 1) +
               std::string(str.substr(len / 2, 1).rbegin(), str.substr(len / 2, 1).rbegin() + 1) + 
               str.substr(len / 2);
    }
}