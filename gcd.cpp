#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int start = 0;
    while (start < text.size()) {
        size_t pos = text.find(target, start);
        if (pos == std::string::npos) break;
        result.push_back(pos);
        start = pos + 1;
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << "\n";
    
    std::string text, target;
    std::cin >> text >> target;
    std::cout << "[";
    for (const auto& i : indicesOfSubstring(text, target)) {
        std::cout << i;
        if (i < text.size() - target.size()) std::cout << ", ";
    }
    std::cout << "]\n";

    return 0;
}