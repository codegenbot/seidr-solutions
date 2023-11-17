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
    int n=str.length();
    string s="",s1="";
    for(int i=0;i<n;i++){
        s=str.substr(i,n-i);
        if(is_palindrome(s)){
            s1=str.substr(0,i);
            break;
        }
    }
    string s2(s1.rbegin(),s1.rend());
    return str+s2;
}
int main(){
    string str;
    printf("Enter a string:\n");
    cin>>str;
    printf("%s",make_palindrome(str).c_str());
    return 0;
}
