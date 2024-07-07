#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int i=str.length()-1,j=0;
    while(i>=0&&str[i--]==str[j++]);
    j--;
    string prefix=str.substr(0,j);
    string suffix=str.substr(j,str.length()-j);
    if(is_palindrome(suffix)) return str+suffix;
    for(int k=str.length();k>0;k--){
        if(!is_palindrome(prefix+"c"+suffix)){
            return str+string(1,'c')+suffix;
        }
    }
    return "";
}