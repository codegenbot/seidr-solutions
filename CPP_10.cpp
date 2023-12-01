#include <stdio.h>
#include <string>
using namespace std;

bool is_palindrome(string str) {
    string s(str.rbegin(), str.rend());
    return s == str;
}

string make_palindrome(string str) {
    string prefix = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        prefix += str[i];
        if (is_palindrome(prefix)) {
            return str + prefix;
        }
    }
    return str + prefix;
}