#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int i = 0;

    while (i <= text.length() - target.length()) {
        i = text.find(target, i);
        if (i == std::string::npos) break;
        result.push_back(i);
        i += target.length();
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
    std::cout << gcd(a, b) << std::endl;

    std::string text, target;
    std::cin >> text >> target;
    for (auto i : indicesOfSubstring(text, target))
        std::cout << i << " ";
    return 0;
}