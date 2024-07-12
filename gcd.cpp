#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int gcd(int a, int b) {
    if (a < 0 || b < 0) {
        return gcd(std::abs(a), std::abs(b));
    }
    
    a = std::abs(a);
    b = std::abs(b);
    
    return b == 0 ? a : gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t targetLen = target.length();
    size_t textLen = text.length();

    for (size_t i = 0; i <= textLen - targetLen; ++i) {
        if (text.substr(i, targetLen) == target) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text and target separated by a space: ";
    std::getline(std::cin, text);
    
    std::istringstream iss(text);
    std::getline(iss, text, ' ');
    std::getline(iss, target);

    std::vector<int> result = indicesOfSubstring(text, target);

    for (int index : result) {
        std::cout << index << " ";
    }

    return 0;
}