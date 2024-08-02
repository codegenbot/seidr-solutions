#include <string>
#include <cassert>

using namespace std;

bool is_palindrome(const string& str) {
    return str == string(str.rbegin(), str.rend());
}

string make_palindrome(string str) {
    string rev_str(str.rbegin(), str.rend());
    string palindrome = str;
    for (int i = str.length() - 1; i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            palindrome += rev_str.substr(0, str.length() - i);
            break;
        }
    }
    return palindrome;
}

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
    return 0;
}