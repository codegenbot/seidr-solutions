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

    if (a == 0) return b;
    if (a % b == 0) return b;

    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }

    return a * sign;
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