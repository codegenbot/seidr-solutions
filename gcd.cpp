#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

std::vector<int> findIndices(const std::string &text, const std::string &target) {
    std::vector<int> indices;
    int textLength = text.length();
    int targetLength = target.length();

    for (int i = 0; i <= textLength - targetLength; ++i) {
        if (text.substr(i, targetLength) == target) {
            for (int j = 0; j < targetLength; ++j) {
                indices.push_back(i + j);
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
    std::vector<int> result = findIndices(text, target);
    for (int idx : result) {
        std::cout << idx << " ";
    }

    return 0;
}