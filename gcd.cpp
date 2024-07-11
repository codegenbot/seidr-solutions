#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int gcd(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);
    
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    size_t targetLen = target.length();

    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += 1; // Increment position to handle overlapping substrings
    }

    return indices;
}

int main() {
    std::string text = "abracadabra";
    std::string target = "abra";
    std::vector<int> result = indicesOfSubstring(text, target);
    
    for (int index : result) {
        std::cout << index << " ";
    }
    
    return 0;
}