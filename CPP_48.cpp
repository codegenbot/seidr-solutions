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
    std::cout << is_palindrome("racecar") << std::endl;  // Expected output: 1 (true)
    std::cout << is_palindrome("hello") << std::endl;    // Expected output: 0 (false)
    std::cout << is_palindrome("level") << std::endl;    // Expected output: 1 (true)
    std::cout << is_palindrome("world") << std::endl;    // Expected output: 0 (false)

    return 0;
}