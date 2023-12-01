#include <string>

bool is_palindrome(string text);

bool is_palindrome(string text){
    int length = text.length();
    for (int i = 0; i < length / 2; i++) {
        if (text[i] != text[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Code for testing the is_palindrome function
    return 0;
}