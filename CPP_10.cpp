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
    if(is_palindrome(str))
        return str;
    else{
        string s;
        int i;
        for(i=str.size()-1;i>=0;i--){
            if(is_palindrome(str.substr(i,str.size()-i)))
                break;
        }
        s=str.substr(0,i);
        s=s.append(str.rbegin(),str.rend());
        return s;
    }
}
int main(){
    string str;
    printf("Enter the string\n");
    getline(cin,str);
    printf("The palindrome is\n");
    cout<<make_palindrome(str)<<endl;
    return 0;
}
