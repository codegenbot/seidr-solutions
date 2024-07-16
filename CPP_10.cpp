#include<stdio.h>
#include<string>
using namespace std;
bool is_palindrome(string str){
    //Test if given string is a palindrome 
    string s(str.rbegin(),str.rend());
    return s==str;
}
string make_palindrome(string str){
    int n = str.size();
    for(int i=n-1;i>=0;i--){
        if(is_palindrome(str.substr(i))){
            return str + string(str.begin(), str.begin()+i);
        }
    }
    return str;
}