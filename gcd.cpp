#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

int gcd(int a, int b) {
    int sign = (a < 0) ? -1 : 1;
    a = std::abs(a);
    b = std::abs(b);

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