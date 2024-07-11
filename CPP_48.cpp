```cpp
#include <iostream>
#include <string>

bool is_palindrome(std::string text){
    int start = 0;
    int end = text.length() - 1;

    while(start < end){
        if(text[start] != text[end])
            return false;
        start++;
        end--;
    }

    return true;

}

int main {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    if(is_palindrome(input))
        std::cout << "The entered string is a palindrome." << std::endl;
    else
        std::cout << "The entered string is not a palindrome." << std::endl;
}