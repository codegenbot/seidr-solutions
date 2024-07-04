#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const string& text) {
    int n = text.length();
    for(int i = 0; i < n / 2; ++i) {
        if(text[i] != text[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string text;
    cin >> text;
    if (is_palindrome(text)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }
    return 0;
}