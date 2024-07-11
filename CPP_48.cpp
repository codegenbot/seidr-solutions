#include <string>
#include <iostream>
#include <limits>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    std::cin.ignore(std::streambuf::inlimits().max(), '\n');
    
    if (is_palindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }
}

bool is_palindrome(std::string s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}