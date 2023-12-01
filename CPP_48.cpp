#include <iostream>
using namespace std;

bool is_palindrome(string text) {
    int left = 0;
    int right = text.length() - 1;

    while (left < right) {
        if (text[left] != text[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    cout << is_palindrome("") << endl;
    cout << is_palindrome("aba") << endl;
    cout << is_palindrome("aaaaa") << endl;
    cout << is_palindrome("zbcd") << endl;

    return 0;
}