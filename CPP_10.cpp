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
    string s(str);
    string t(s.rbegin(),s.rend());
    if(is_palindrome(str)){
        return str;
    }
    for(int i=str.size()-1;i>=0;i--){
        string prefix(str.begin(),str.begin()+i);
        string postfix(str.begin()+i,str.end());
        if(is_palindrome(postfix)){
            return str+t.substr(str.size()-i,i);
        }
    }
    return "";
}
int main(){
    string s;
    while(cin>>s){
        cout<<make_palindrome(s)<<endl;
    }
}
