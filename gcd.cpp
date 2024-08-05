#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}

int main() {
    int a, b;
    std::cout << "Enter two integers separated by a space: ";
    std::cin >> a >> b;

    std::cout << gcd(a, b) << std::endl;

    std::string text, target;
    std::cout << "Enter text and target string separated by a space: ";
    std::cin.ignore();
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}