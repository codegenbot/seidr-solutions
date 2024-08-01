#include <iostream>
#include <string>
#include <vector>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

std::vector<int> findIndicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    if (target.empty()) {
        return indices;
    }
    int m = text.size();
    int n = target.size();
    for (int i = 0; i <= m - n; ++i) {
        bool found = true;
        for (int j = 0; j < n; ++j) {
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
    int a, b;
    std::string text, target;
    
    std::cout << "Enter two integers for gcd calculation: ";
    std::cin >> a >> b;
    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;

    std::cout << "Enter text string: ";
    std::cin >> text;
    std::cout << "Enter target string: ";
    std::cin >> target;

    std::vector<int> result = findIndicesOfSubstring(text, target);
    std::cout << "Indices of the target string in text: ";
    for (int idx : result) {
        std::cout << idx << " ";
    }
    
    return 0;
}