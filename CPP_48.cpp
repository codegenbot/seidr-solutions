#include <string>

bool is_palindrome(std::string text){
    int len = text.length();
    for(int i=0; i<len/2; i++){
        if(text[i] != text[len-i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    // Test Cases
    std::cout << is_palindrome("level") << std::endl; // true
    std::cout << is_palindrome("hello") << std::endl; // false
    std::cout << is_palindrome("racecar") << std::endl; // true

    return 0;
}