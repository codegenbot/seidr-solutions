#include <iostream>
#include <string>

bool is_palindrome(std::string text) {
    int start = 0;
    int end = text.length() - 1;

    while(start < end){
        if(text[start] != text[end]){
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::cin >> text;
    
    if(is_palindrome(text)) {
        std::cout << "The given string is a palindrome." << std::endl;
    } else {
        std::cout << "The given string is not a palindrome." << std::endl;
    }
    
    return 0;
}