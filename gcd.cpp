#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // start searching from the next position
    }

    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    std::cin >> a >> b;

    std::cout << gcd(a, b) << "\n";

    std::string text, target;
    std::cin >> text >> target;

    for (const auto& index : indicesOfSubstring(text, target)) {
        std::cout << index << "\n";
    }

    return 0;
}