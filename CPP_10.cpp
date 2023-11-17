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
    string s;
    int len=str.length();
    for(int i=0;i<len;i++){
        string s1=str.substr(len-i-1,i+1);
        if(is_palindrome(s1)){
            s=str;
            s.append(s1.rbegin(),s1.rend());
            break;
        }
    }
    return s;
}
int main(){
    string str;
    printf("Enter the string\n");
    scanf("%s",str);
    printf("%s\n",make_palindrome(str));
}
