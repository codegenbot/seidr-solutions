#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string str) {
    string s(str.rbegin(), str.rend());
    return s == str;
}

string make_palindrome(string str) {
    int len = str.length();
    if (is_palindrome(str)) {
        return str;
    }
    
    for (int i = 1; i < len; ++i) {
        if (is_palindrome(str.substr(i))) {
            string prefix = str.substr(0, i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    return str + rev_str.substr(1);
}

int main() {
    string str;
    cin >> str;
    cout << make_palindrome(str) << endl;
    return 0;
}