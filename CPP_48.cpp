#include <iostream>
#include <string>
#include <cassert>

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
    assert(is_palindrome("xywzx") == false);
    
    return 0;
}