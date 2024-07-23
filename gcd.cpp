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
        size_t j = 0;
        bool found = true;
        while ((j += 1) <= m && std::string(&text[i], 1).compare(std::string(1, &target[j-1])) == 0) {
            if (std::string(&text[i], j).compare(target) != 0)
                found = false;
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

    std::vector<size_t> result = indicesOfSubstring(text, target);
    std::cout << "Indices: ";
    for (size_t i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    size_t GCD = gcd((size_t)text.length(), (size_t)target.length());
    std::cout << "GCD of text and target: " << GCD << std::endl;
}