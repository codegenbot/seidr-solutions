#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int gcd(int a, int b) {
    int sign = 1;
    if (a < 0) {
        sign *= -1;
        a = -a;
    }
    if (b < 0) {
        sign *= -1;
        b = -b;
    }

    return b == 0 ? a : gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    size_t targetLen = target.length();

    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += targetLen == 0 ? 1 : targetLen;
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