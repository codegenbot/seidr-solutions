#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int gcd(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);
    
    return b == 0 ? a : gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    size_t targetLen = target.length();

    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += 1; // Update to consider overlapping occurrences
    }

    return indices;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    std::cout << "Enter the target: ";
    std::cin.ignore();
    std::getline(std::cin, target);

    std::vector<int> result = indicesOfSubstring(text, target);
    
    for (int index : result) {
        std::cout << index << " ";
    }
    
    return 0;
}