#include <string>
using namespace std;

bool is_palindrome(string str) {
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str) {
    if(is_palindrome(str)) return str; // base case: already a palindrome
    
    int i = 0, j = str.length() - 1;
    while(i < j && str[i] == str[j]) { // find the longest palindromic prefix
        i++; j--;
    }
    
    string rev = str.substr(i); // reverse of the non-palindromic suffix
    string palindrome = str + rev; // concatenate with the original string
    
    return palindrome;
}