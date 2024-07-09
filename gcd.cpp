#include <iostream>
#include <vector>
#include <cstdlib>

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << "\n";

    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;
    for (size_t i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
        }
    }

    for (int index : indices) {
        std::cout << index << " ";
    }
    std::cout << "\n";

    return 0;
}