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
    string temp=str;
    for(int i=0;i<str.length();i++){
        temp=temp.substr(1);
        if(is_palindrome(temp)){
            return str+s.substr(str.length()-i-1);
        }
    }
    return str+s;
}
int main(){
    string str;
    cin>>str;
    cout<<make_palindrome(str);
    return 0;
}
