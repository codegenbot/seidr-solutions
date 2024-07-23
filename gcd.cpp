```cpp
#include <iostream>
#include <vector>
#include <string>

size_t gcd(size_t a, size_t b) {
    while (b != 0) {
        size_t temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<std::size_t> indicesOfSubstring(std::string text, std::string target) {
    std::vector<std::size_t> result;
    size_t n = text.length();
    size_t m = target.length();

    for (size_t i = 0; i <= n - m; i++) {
        bool found = true;
        for (size_t j = 0; j < m; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
            i += m - 1; // Handle overlapping occurrences
        } else 
            i++; // No need to increment i in this case
    }

    return result;
}

int main() {
    std::string text = "Hello World";
    std::string target = "World";

    std::vector<std::size_t> result = indicesOfSubstring(text, target);
    std::cout << "Indices: ";
    for (std::size_t i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    size_t GCD = gcd(text.length(), target.length());
    std::cout << "GCD of text and target: " << GCD << std::endl;
}