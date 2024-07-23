#include <vector>
#include <string>
#include <iostream>

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
    // Add your test cases here
    int a, b;
    std::string text, target;
    
    std::cout << "Enter two integers to find their gcd: ";
    std::cin >> a >> b;
    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;
    
    std::cout << "Enter text string: ";
    std::cin >> text;
    std::cout << "Enter target string: ";
    std::cin >> target;
    
    std::vector<int> result = indicesOfSubstring(text, target);
    std::cout << "Indices where target appears in text:";
    for (int idx : result) {
        std::cout << " " << idx;
    }
    
    return 0;
}