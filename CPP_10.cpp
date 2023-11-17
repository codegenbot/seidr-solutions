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
    string s=str;
    if(is_palindrome(s))
        return s;
    int i;
    for(i=s.length()-1;i>=0;i--)
        if(is_palindrome(s.substr(i,s.length()-i)))
            break;
    string s1=s.substr(0,i);
    string s2(s1.rbegin(),s1.rend());
    return s+s2;
}
int main(){
    string str;
    getline(cin,str);
    cout<<make_palindrome(str);
    return 0;
}
