#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string text) {
    int n = text.length();
    for(int i = 0; i < n / 2; ++i) {
        if(text[i] != text[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    if (is_palindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}