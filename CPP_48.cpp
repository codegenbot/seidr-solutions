#include <iostream>
#include <string>

bool is_palindrome(std::string text){
    int n = text.length();
    for(int i=0; i<n/2; i++){
        if(text[i] != text[n-i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    // Test cases
    std::cout << is_palindrome("hello") << std::endl; // 0
    std::cout << is_palindrome("madam") << std::endl; // 1
    std::cout << is_palindrome("racecar") << std::endl; // 1
    std::cout << is_palindrome("xywzx") << std::endl; // 0

    return 0;
}