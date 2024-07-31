#include <iostream>
#include <string>
#include <cassert>

bool is_palindrome(std::string text) {
    int left = 0, right = text.length() - 1;
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
    assert(is_palindrome("xywzx") == false);
    assert(is_palindrome("radar") == true);
    assert(is_palindrome("level") == true);
    assert(is_palindrome("hello") == false);
    assert(is_palindrome("") == true);
    
    return 0;
}