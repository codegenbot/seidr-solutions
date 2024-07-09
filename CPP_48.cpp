```cpp
#include <cassert>
#include <iostream>

bool is_palindrome(const std::string& s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (!std::isspace(s[left]) && !std::isspace(s[right])) { 
            if (s[left] != s[right])
                return false;
        } else { 
            if (std::isspace(s[left]))
                left++;
            if (std::isspace(s[right]))
                right--;
        }
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