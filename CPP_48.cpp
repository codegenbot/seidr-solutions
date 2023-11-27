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
    std::cout << is_palindrome("racecar") << std::endl;   // 1
    std::cout << is_palindrome("hello") << std::endl;     // 0
    std::cout << is_palindrome("aabbaa") << std::endl;    // 1
    std::cout << is_palindrome("") << std::endl;          // 1
    return 0;
}