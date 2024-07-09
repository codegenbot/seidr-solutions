```cpp
#include <cassert>
#include <iostream>

bool is_palindrome(const std::string& s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right])
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