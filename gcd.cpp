#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

std::vector<int> findIndices(const std::string &text, const std::string &target) {
    std::vector<int> indices;
    int pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << gcd(num1, num2) << std::endl;

    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> result = findIndices(text, target);
    for (int index : result) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}