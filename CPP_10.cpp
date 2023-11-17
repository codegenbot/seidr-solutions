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
    for(int i=1;i<str.length();i++){
        string prefix=str.substr(0,i);
        string suffix=str.substr(i);
        if(is_palindrome(suffix)){
            return suffix+prefix+s;
        }
    }
    return str+s;
}
int main(){
    printf("%s\n",make_palindrome("cat").c_str());
    printf("%s\n",make_palindrome("cata").c_str());
    printf("%s\n",make_palindrome("").c_str());
    return 0;
}
