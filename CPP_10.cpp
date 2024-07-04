#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(), str.rend());
    return s == str;
}

string make_palindrome(string str){
    int n = str.size();
    if (n == 0) return "";
    
    for (int i = n; i > 0; --i) {
        if (is_palindrome(str.substr(0, i))) {
            string suffix = str.substr(i);
            reverse(suffix.begin(), suffix.end());
            return str + suffix;
        }
    }
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string result = make_palindrome(input);
    cout << "Shortest palindrome: " << result << endl;
    return 0;
}