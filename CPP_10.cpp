#include <iostream>
#include <string>
#include <algorithm>

bool is_palindrome(const std::string& str) {
    return str == std::string(str.rbegin(), str.rend());
}

std::string make_palindrome(const std::string& str) {
    if (str.empty()) return str;
    int n = str.size();
    for (int i = n - 1; i >= 0; i--) {
        if (is_palindrome(str.substr(i))) {
            std::string prefix = str.substr(0, i);
            std::reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return str;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    
    std::cout << "Result: " << make_palindrome(input) << std::endl;
    
    return 0;
}