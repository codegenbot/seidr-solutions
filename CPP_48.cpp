#include <iostream>
#include <cassert>
#include <string>

bool is_palindrome(const std::string& text) {
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
    // Testing the is_palindrome function
    assert(is_palindrome("madam") == true);
    assert(is_palindrome("hello") == false);

    return 0;
}