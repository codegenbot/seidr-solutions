```cpp
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += 1; // to avoid duplicate matches
    }
    return indices;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text: ";
    std::cin >> text;
    std::cout << "Enter the target: ";
    std::cin >> target;

    std::vector<int> indices = indicesOfSubstring(text, target);
    int max_gcd = 0;
    for (int i = 1; i < indices.size(); i++) {
        int diff = abs(indices[i] - indices[i-1]);
        int g = gcd(diff, indices[i-1]);
        if (g > max_gcd) {
            max_gcd = g;
        }
    }
    std::cout << "Indices: ";
    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "GCD of indices: " << max_gcd << std::endl;

    return 0;
}