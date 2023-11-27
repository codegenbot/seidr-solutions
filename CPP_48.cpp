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
    std::cout << is_palindrome("hello") << std::endl;
    std::cout << is_palindrome("madam") << std::endl;
    std::cout << is_palindrome("racecar") << std::endl;
    std::cout << is_palindrome("xywzx") << std::endl;

    return 0;
}