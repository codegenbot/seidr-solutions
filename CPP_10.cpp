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
    // Find the longest palindromic suffix
    string suffix(str.rbegin(), str.rend());
    string prefix(str.begin(), str.end());
    for (int i = 0; i < str.size(); i++) {
        if (suffix.substr(i) == prefix.substr(0, str.size() - i)) {
            return str + suffix.substr(i);
        }
    }
    return str + suffix;
}
int main(){
    string s;
    cin>>s;
    cout<<make_palindrome(s);
    return 0;
}
