#include <string>

bool is_palindrome(string str) {
    for (int i = 0; i < str.size() / 2; i++) {
        if (str[i] != str[str.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

string make_palindrome(string str);

int main() {
    string input_str;
    cin >> input_str;
    cout << make_palindrome(input_str);
    return 0;
}

string make_palindrome(string str) {
    string rev_str(str.rbegin(), str.rend());
    for (int i = str.size(); i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            return str + rev_str.substr(0, str.size() - i);
        }
    }
    return str;
}