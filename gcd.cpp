#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;

    a = abs(a);
    b = abs(b);

    while (a % b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return b;
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