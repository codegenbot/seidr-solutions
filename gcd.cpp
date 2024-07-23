#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int n = text.size(), m = target.size();
    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
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
    // Test cases for gcd function
    std::cout << "GCD of 12 and 18 is: " << gcd(12, 18) << std::endl;
    std::cout << "GCD of 25 and 15 is: " << gcd(25, 15) << std::endl;

    // Test cases for indicesOfSubstring function
    std::vector<int> indices1 = indicesOfSubstring("hellohello", "hello");
    std::cout << "Indices of 'hello' in 'hellohello': ";
    for (int idx : indices1) {
        std::cout << idx << " ";
    }
    std::cout << std::endl;

    std::vector<int> indices2 = indicesOfSubstring("abababab", "aba");
    std::cout << "Indices of 'aba' in 'abababab': ";
    for (int idx : indices2) {
        std::cout << idx << " ";
    }
    std::cout << std::endl;

    return 0;
}