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
    // Test cases
    std::cout << is_palindrome("racecar") << std::endl;  // Expected output: 1
    std::cout << is_palindrome("hello") << std::endl;    // Expected output: 0
    std::cout << is_palindrome("madam") << std::endl;    // Expected output: 1
    std::cout << is_palindrome("") << std::endl;         // Expected output: 1 (empty string is considered a palindrome)
    
    return 0;
}