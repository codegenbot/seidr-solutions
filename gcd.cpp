#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int pos = text.find(target, 0);
    while (pos != std::string::npos) {
        result.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return result;
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