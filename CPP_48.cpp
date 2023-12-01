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
    // Test cases for is_palindrome function
    cout << is_palindrome("hello") << endl;  // 0
    cout << is_palindrome("madam") << endl;  // 1
    cout << is_palindrome("racecar") << endl;  // 1
    cout << is_palindrome("12321") << endl;  // 1
    
    return 0;
}