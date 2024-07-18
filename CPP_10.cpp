#include <string>
#include <cassert>

bool is_palindrome(string str) {
    int left = 0, right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

string make_palindrome(string str) {
    if (str.empty()) return "";
    int n = str.size();
    for (int i = n - 1; i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            string prefix = str.substr(0, i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return "";
}