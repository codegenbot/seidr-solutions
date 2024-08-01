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
    
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    
    int result_gcd = gcd(a, b);
    std::cout << "GCD of " << a << " and " << b << " is: " << result_gcd << std::endl;
    
    std::cout << "Enter text string: ";
    std::cin >> text;
    
    std::cout << "Enter target string: ";
    std::cin >> target;
    
    std::vector<int> results_indices = findIndicesOfSubstring(text, target);
    
    std::cout << "Target string appears at indices: ";
    for (int idx : results_indices) {
        std::cout << idx << " ";
    }
    
    return 0;
}