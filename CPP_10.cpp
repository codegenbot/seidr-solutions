#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_palindrome(string str) {
    string s(str.rbegin(), str.rend());
    return s == str;
}

string make_palindrome(string str) {
    int n = str.length();
    if (n == 0) return "";
    for (int i = n; i > 0; i--) {
        if (is_palindrome(str.substr(0, i))) {
            string suffix = str.substr(i);
            reverse(suffix.begin(), suffix.end());
            return str + suffix;
        }
    }
    return str;
}

int main() {
    string str;
    cin >> str;
    cout << make_palindrome(str) << endl;
    return 0;
}