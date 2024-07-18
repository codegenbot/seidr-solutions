#include <iostream>
#include <string>
#include <cassert>

bool is_palindrome(const std::string& text) {
    int i = 0;
    int j = text.length() - 1;
    while (i < j) {
        if (text[i] != text[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    // Add more test cases if necessary

    return 0;
}