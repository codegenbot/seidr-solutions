#include <stdio.h>
#include <string>
using namespace std;

bool is_palindrome(string str) {
    string s(str.rbegin(), str.rend());
    return s == str;
}

string make_palindrome(string str) {
    string prefix = "";
    int n = str.length();
    
    for (int i = n - 1; i >= 0; i--) {
        if (is_palindrome(str.substr(0, i + 1))) {
            prefix = str.substr(i + 1, n - i - 1);
            break;
        }
    }
    
    string palindrome = str + string(prefix.rbegin(), prefix.rend());
    return palindrome;
}