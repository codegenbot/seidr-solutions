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

std::vector<unsigned long> indicesOfSubstring(std::string text, std::string target) {
    std::vector<unsigned long> result;
    unsigned long n = text.length();
    unsigned long m = target.length();

    for (unsigned long i = 0; i <= n - m; i++) {
        unsigned long j = 0;
        bool found = true;
        unsigned long start = i;
        while ((j += 1) <= m && text.substr(start, j).compare(0, j, target, 0, j) == 0) {
            if (j != m) {
                if (!text.substr(start, j).compare(0, j, target, 0, j))
                    found = false;
            }
        }
        if (found) {
            result.push_back(start);
            i += m - 1; // Handle overlapping occurrences
        } else 
            i++; // No need to increment i in this case
    }

    return result;
}

int main() {
    std::string text = "Hello World";
    std::string target = "World";

    std::vector<unsigned long> result = indicesOfSubstring(text, target);
    std::cout << "Indices: ";
    for (unsigned long i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    size_t GCD = gcd((size_t)text.length(), (size_t)target.length());
    std::cout << "GCD of text and target: " << GCD << std::endl;
}