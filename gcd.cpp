#include <iostream>
#include <string>
#include <vector>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    for (size_t i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            for (size_t j = i; j < i + target.size(); ++j) {
                indices.push_back(j);
            }
        }
    }
    return indices;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;

    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> result = indicesOfSubstring(text, target);
    for (int idx : result) {
        std::cout << idx << " ";
    }
    std::cout << std::endl;

    return 0;
}