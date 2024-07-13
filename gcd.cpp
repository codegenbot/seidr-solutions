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
    return a;
}

std::vector<std::size_t> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<std::size_t> result;
    std::size_t n = text.length();
    std::size_t m = target.length();

    for (std::size_t i = 0; i <= n - m; ++i) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
            while (i + m < n && text.substr(i, m) == target) {
                i += m;
            }
        }
    }

    return result;
}

int main() {
    std::cout << "GCD of 12 and 15: " << gcd(12, 15) << std::endl;
    std::string text = "Hello world";
    std::string target = "world";
    std::vector<std::size_t> indices = indicesOfSubstring(text, target);
    for (std::size_t index = 0; index < indices.size(); ++index) {
        std::cout << "Target found at index: " << indices[index] << std::endl;
    }
    return 0;
}