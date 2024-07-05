#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool is_palindrome(const string& str) {
    return equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}

string make_palindrome(const string& str) {
    int n = str.length();
    if (n == 0) return "";
    for (int i = n; i > 0; i--) {
        if (is_palindrome(str.substr(0, i))) {
            string suffix = str.substr(i);
            reverse(suffix.begin(), suffix.end());
            return str + suffix;
        }
    }
    return str;  // This line is theoretically unreachable
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    cout << "Palindrome: " << make_palindrome(str) << endl;
    return 0;
}