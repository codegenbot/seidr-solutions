#include<stdio.h>
#include<string>
using namespace std;
bool is_palindrome(string str){
    //Test if given string is a palindrome 
    string s(str.rbegin(),str.rend());
    return s==str;
}
string make_palindrome(string str){
    /*
    Find the shortest palindrome that begins with a supplied string. 
    Algorithm idea is simple: - Find the longest postfix of supplied string that is a palindrome. 
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    >>> make_palindrome("") 
    "" 
    >>> make_palindrome("cat") 
    "catac" 
    >>> make_palindrome("cata") 
    "catac" 
    */
    string s(str.rbegin(),str.rend());
    int len=str.length();
    for(int i=0;i<len;i++){
        if(is_palindrome(str.substr(0,len-i))){
            return str+s.substr(i,len-i);
        }
    }
    return str;
}
int main(){
    string str;
    cin>>str;
    cout<<make_palindrome(str);
    return 0;
}
