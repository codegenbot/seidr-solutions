#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    // Remove characters in s that are equal to any character in c
    for (char ch : c) {
        s.erase(std::remove(s.begin(), s.end(), ch), s.end());
    }
    
    // Check if the result string is palindrome
    std::string reversed_s = s;
    std::reverse(reversed_s.begin(), reversed_s.end());
    bool is_palindrome = (s == reversed_s);
    
    // Return the result string and "True"/"False" for the check
    return {s, (is_palindrome ? "True" : "False")};
}

int main() {
    std::string s, c;
    std::cin >> s >> c;
    
    std::vector<std::string> result = reverse_delete(s, c);
    
    // Print the result
    for (const std::string& str : result) {
        std::cout << str << " ";
    }
    
    return 0;
}