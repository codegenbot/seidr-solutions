#include <iostream>

int main() {
    // Test cases for gcd function
    std::cout << "GCD of 10 and 15 is: " << gcd(10, 15) << std::endl;
    std::cout << "GCD of 24 and 36 is: " << gcd(24, 36) << std::endl;

    // Test cases for indicesOfSubstring function
    std::string text = "abababab";
    std::string target = "aba";
    std::vector<int> indices = indicesOfSubstring(text, target);

    std::cout << "Indices where 'aba' appears in 'abababab': ";
    for (int idx : indices) {
        std::cout << idx << " ";
    }
    std::cout << std::endl;

    return 0;
}