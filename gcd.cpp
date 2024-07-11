#include <iostream>
#include <string>
#include <vector>
#include <cmath>

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
    size_t pos = 0;
    size_t targetLen = target.length();

    while ((pos = text.find(target, pos)) != std::string::npos || targetLen == 1) {
        indices.push_back(pos);
        if (targetLen == 1) {
            ++pos;
        } else {
            pos += targetLen;
        }
    }
    
    return indices;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    std::cout << "Enter the target: ";
    std::getline(std::cin, target);

    std::vector<int> result = indicesOfSubstring(text, target);
    
    for (int index : result) {
        std::cout << index << " ";
    }
    
    return 0;
}