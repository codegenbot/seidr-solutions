#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int index = 0;

    while ((index = text.find(target)) != std::string::npos) {
        result.push_back(index);
        if (index < text.size() - target.size()) {
            index++;
        } else {
            break;
        }
    }

    return result;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}