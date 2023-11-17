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
    string temp=str+s;
    int n=temp.length();
    int f[n+1];
    f[0]=0;
    for(int i=1;i<=n;i++){
        int j=f[i-1];
        while(j>0 && temp[j]!=temp[i-1]) j=f[j-1];
        if(temp[j]==temp[i-1]) j++;
        f[i]=j;
    }
    return str.substr(0,str.length()-f[n])+s;
}
int main(){
    string str;
    cin>>str;
    cout<<make_palindrome(str);
}
