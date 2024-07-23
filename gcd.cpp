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

std::vector<size_t> indicesOfSubstring(std::string text, std::string target) {
    std::vector<size_t> result;
    size_t n = text.length();
    size_t m = target.length();

    for (size_t i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
            while ((i + m) <= n && text.substr(i, m) == target)
                i++; // Handle overlapping occurrences
        }
    }

    return result;
}

int main() {
    std::string text = "Hello World";
    std::string target = "World";
    std::vector<size_t> result;

    size_t GCD = gcd(909378243576LL, 50); 
    std::cout << "GCD of " << 909378243576LL << " and " << 50 << ": " << GCD << std::endl;
    
    result = indicesOfSubstring(text, target);
    std::cout << "Indices: ";
    for (size_t i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}