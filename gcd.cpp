#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string &text, const std::string &target) {
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}

int main() {
    // Function calls to test gcd and indicesOfSubstring functions
    int a = 12, b = 18;
    std::cout << gcd(a, b) << std::endl;

    // Customize your inputs for testing indicesOfSubstring function
    std::string text = "ababcababc";
    std::string target = "abc";
    std::vector<int> indices = indicesOfSubstring(text, target);
    for (int index : indices) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}