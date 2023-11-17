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
    //Find the longest postfix of supplied string that is a palindrome. 
    string s(str.rbegin(),str.rend());
    string res=str+s;
    return res;
}
int main(){
    string str;
    cout<<"Enter a string:"<<endl;
    cin>>str;
    cout<<"The shortest palindrome that begins with a supplied string is:"<<endl;
    cout<<make_palindrome(str)<<endl;
    return 0;
}
