#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    
    // Check for valid input
    if (target.empty() || target.length() > text.length()) {
        return result;
    }
    
    // Iterate through the text
    for (int i = 0; i <= text.length() - target.length(); i++) {
        // Check if target is found at current position
        if (text.substr(i, target.length()) == target) {
            result.push_back(i);
        }
    }
    
    return result;
}

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::vector<int> output = indicesOfSubstring(text, target);
    
    for (int i : output) {
        std::cout << i << " ";
    }
    
    return 0;
}