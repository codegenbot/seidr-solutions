#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_palindrome(string str) {
    string s(str.rbegin(), str.rend());
    return s == str;
}

string make_palindrome(string str) {
    int n = str.size();
    for (int i = n; i >= 0; --i) {
        if (is_palindrome(str.substr(0, i))) {
            string prefix = str.substr(i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return str; // should never reach here
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Shortest palindrome: " << make_palindrome(input) << endl;
    return 0;
}