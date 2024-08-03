#include <iostream>
#include <string>
#include <vector>

int gcd(int a, int b) {
    // Implementation of gcd function
}

std::vector<int> findIndicesOfSubstring(const std::string& text, const std::string& target) {
    // Implementation of findIndicesOfSubstring function
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;
    
    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> result = findIndicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    return 0;
}