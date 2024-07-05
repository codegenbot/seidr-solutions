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
    string text;
    cout << "Enter a string: ";
    cin >> text;

    if(is_palindrome(text)) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is not a palindrome.\n";
    }

    return 0;
}