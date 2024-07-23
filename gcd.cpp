```cpp
#include <iostream>
#include <vector>
#include <string>

unsigned long gcd(unsigned long a, unsigned long b) {
    while (b != 0) {
        unsigned long temp = b;
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

    std::vector<unsigned long> result = indicesOfSubstring(text, target);
    std::cout << "Indices: ";
    for (unsigned long i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    unsigned long GCD = gcd((unsigned long)text.length(), (unsigned long)target.length());
    std::cout << "GCD of text and target: " << GCD << std::endl;
}