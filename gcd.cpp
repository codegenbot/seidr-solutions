#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int n = text.size();
    int m = target.size();

    for (int i = 0; i <= n - m; ++i) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
            while (i + m < n && text.substr(i, m) == target) {
                i += m;
                result.push_back(i);
            }
        }
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

    for (int num : indicesOfSubstring(text, target)) {
        std::cout << num << " ";
    }
    return 0;
}