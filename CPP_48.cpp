#include <iostream>
#include <string>

bool is_palindrome(const std::string& text) {
    int i = 0, j = text.length() - 1;
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
    std::string test1 = "level";
    std::string test2 = "hello";
    
    std::cout << is_palindrome(test1) << std::endl; // Output should be 1
    std::cout << is_palindrome(test2) << std::endl; // Output should be 0
    
    return 0;
}