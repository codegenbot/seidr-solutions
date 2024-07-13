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

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    size_t n = text.length();
    size_t m = target.length();

    for (size_t i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back((int)i);
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
    std::vector<int> indices = indicesOfSubstring(text, target);
    for (int index = 0; index < indices.size(); index++) {
        std::cout << "Target found at index: " << indices[index] << std::endl;
    }
    return 0;
}