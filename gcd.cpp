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

    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += 1; // Update this line to always advance by 1
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