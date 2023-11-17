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
    return str+s.substr(s.find_first_not_of(str));
}
int main(){
    string str;
    printf("Enter a string : ");
    cin>>str;
    if(is_palindrome(str)){
        printf("%s is a palindrome\n",str.c_str());
    }else{
        printf("%s is not a palindrome\n",str.c_str());
        printf("Shortest palindrome that begins with %s is %s\n",str.c_str(),make_palindrome(str).c_str());
    }
    return 0;
}
