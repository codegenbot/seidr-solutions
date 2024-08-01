#include <iostream>

int main() {
    // Test gcd function
    int a = 24;
    int b = 36;
    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;

    // Test indicesOfSubstring function
    std::string text = "abcdefabcghiabc";
    std::string target = "abc";
    std::vector<int> result = indicesOfSubstring(text, target);

    for (int idx : result) {
        std::cout << "Target found at index: " << idx << std::endl;
    }

    return 0;
}