#include <iostream>
#include <string>
#include <algorithm> // Include this header for reverse
using namespace std;

bool is_palindrome(string str) {
    string s(str.rbegin(), str.rend());
    return s == str;
}

string make_palindrome(string str) {
    int n = str.length();
    if (n == 0) return "";
    for (int i = n; i >= 0; --i) {
        if (is_palindrome(str.substr(0, i))) {
            string prefix = str.substr(i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return "";
}

int main() {
    string input;
    cin >> input;
    cout << make_palindrome(input) << endl;
    return 0;
}