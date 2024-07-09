#include <cassert>
#include <iostream>

bool is_palindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }

    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    std::cout << "Test passed.\n";
    return 0;
}