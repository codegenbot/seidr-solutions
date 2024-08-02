#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

std::vector<int> findIndicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int n = text.size();
    int m = target.size();
    
    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            for (int k = i; k < i + m; ++k) {
                indices.push_back(k);
            }
        }
    }
    
    return indices;
}

int main() {
    int a, b;
    std::string text, target;
    
    std::cin >> a >> b;
    std::cin >> text >> target;
    
    std::cout << gcd(a, b) << std::endl;
    
    std::vector<int> result = findIndicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    return 0;
}