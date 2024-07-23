```cpp
#include <iostream>
#include <vector>
#include <string>

std::size_t gcd(std::size_t a, std::size_t b) {
    while (b != 0) {
        std::size_t temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<std::size_t> indicesOfSubstring(std::string text, std::string target) {
    std::vector<std::size_t> result;
    std::size_t n = text.length();
    std::size_t m = target.length();

    for (std::size_t i = 0; i <= n - m; i++) {
        size_t j = 0;
        size_t start = i;
        while (j < m && text[start + j] == target[j])
            ++j; // Corrected the comparison operator from '<=' to '<'
        if (j == m) {
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

    std::size_t GCD = gcd((std::size_t)text.length(), (std::size_t)target.length());
    std::cout << "GCD of text and target: " << GCD << std::endl;
}