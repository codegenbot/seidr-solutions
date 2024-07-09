#include <iostream>
#include <string>
#include <algorithm>

bool is_palindrome(std::string text) {
    std::string temp = text;
    std::reverse(temp.begin(), temp.end());
    return (temp == text);
}

int main() {
    assert(is_palindrome("xywzx") == false);
    return 0;
}