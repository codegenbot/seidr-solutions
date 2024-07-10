#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

bool is_palindrome(const string& str) {
    return str == string(str.rbegin(), str.rend());
}

string make_palindrome(string str) {
    int n = str.length();
    for (int i = n - 1; i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            string prefix = str.substr(0, i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return str;
}