#include <iostream>
#include <vector>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        bool found = true;
        for (int j = 0; j < m; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    int testCase;
    std::cin >> testCase;

    if (testCase == 1) {
        int a, b;
        std::cin >> a >> b;
        std::cout << gcd(a, b) << std::endl;
    } else if (testCase == 2) {
        std::string text, target;
        std::cin >> text >> target;
        std::vector<int> indices = indicesOfSubstring(text, target);
        for (int i = 0; i < indices.size(); i++) {
            std::cout << indices[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}