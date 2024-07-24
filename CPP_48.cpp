#include <algorithm>
#include <string>

bool is_palindrome(const std::string& text) {
    std::string temp = text;
    std::reverse(temp.begin(), temp.end());
    return temp == text;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    // Your code here
}