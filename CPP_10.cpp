#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int i = 0, j = str.length() - 1;
    while (i < j && str[i] == str[j]) {
        i++;
        j--;
    }
    string palindrome = str.substr(i) + string(reverse(str.substr(0, i))).substr(1);
    return palindrome;
}