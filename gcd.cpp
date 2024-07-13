```cpp
#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return b;
}

std::vector<size_t> indicesOfSubstring(std::string text, std::string target) {
    std::vector<size_t> result;
    size_t n = text.length();
    size_t m = target.length();

    for (size_t i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            while (i + m < n && text.substr(i, m) == target) { 
                i += m;
            }
            result.push_back(i); 
        }
    }

    return result;
}

int main() {
    std::cout << "GCD of 12 and 15: " << gcd(12, 15) << std::endl;
    std::string text = "Hello world";
    std::string target = "world";
    std::vector<size_t> indices = indicesOfSubstring(text, target);
    for (size_t index = 0; index < indices.size(); index++) {
        std::cout << "Target found at index: " << indices[index] << std::endl;
    }
    return 0;
}