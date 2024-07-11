#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int gcd(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);
    
    if (a % b == 0) {
        return b;
    }

    return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    size_t targetLen = target.length();

    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += targetLen > 1 ? 1 : targetLen;
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