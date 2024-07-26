#include <iostream>
#include <string>
#include <vector>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> indices;
    // Logic to find indices of target in text
    return indices;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;

    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}