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
    string s = str;
    for (int i=0;i<str.size()-1;i++){
        string temp = str.substr(i+1);
        if (is_palindrome(temp)){
            string s2(str.begin(),str.begin()+i+1);
            string s1(s2.rbegin(),s2.rend());
            s = s1 + str;
            break;
        }
    }
    return s;
}
int main(){
    string s;
    while (true){
        cin >> s;
        cout << make_palindrome(s) << endl;
    }
    return 0;
}
