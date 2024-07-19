#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int i=str.length()-1,j=0;
    while(i>=0 && str[i--]==str[j++])
        ;
    j++;
    string palindrome=str.substr(0,j)+reverse(str.substr(j)).substr(0,str.length()-j);
    return palindrome;
}