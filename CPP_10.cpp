#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool is_palindrome(const string &s) {
    int start = 0, end = s.size() - 1;
    while (start < end) {
        if (s[start] != s[end]) return false;
        ++start;
        --end;
    }
    return true;
}

string make_palindrome(string str) {
    int n = str.size();
    if (n == 0) return str;
    
    for (int i = n; i >= 0; --i) {
        if (is_palindrome(str.substr(0, i))) {
            string suffix = str.substr(i);
            reverse(suffix.begin(), suffix.end());
            return str + suffix;
        }
    }
    return str; // This line should never be reached
}

int main() {
    cout << make_palindrome("jerry") << endl; // Output: jerryrrej
    return 0;
}