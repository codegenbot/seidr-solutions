#include <string>
#include <cassert>

// TASK DESCRIPTION: Complete the is_palindrome function to return true if the input text is a palindrome, false otherwise

bool is_palindrome(const std::string& text) {
    int len = text.length();
    for (int i = 0; i < len / 2; i++) {
        if (text[i] != text[len - i - 1]) {
            return false;
        }
    }
    return true;
}

// Add any additional functions or code needed to complete the task

// Example test cases
int main() {
    assert(is_palindrome("xywzx") == false);
}