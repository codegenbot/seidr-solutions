```cpp
#include <iostream>
#include <vector>
#include <string>

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    while (b != 0) {
        unsigned long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<unsigned long long> indicesOfSubstring(std::string text, std::string target) {
    std::vector<unsigned long long> result;
    unsigned long long n = text.length();
    unsigned long long m = target.length();

    for (unsigned long long i = 0; i <= n - m; i++) {
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
    unsigned long long GCD = gcd(909378243576ULL, 50); 
    std::cout << "GCD of " << 909378243576ULL << " and " << 50 << ": " << GCD << std::endl;
    
    std::vector<unsigned long long> result = indicesOfSubstring(text, target);
    std::cout << "Indices: ";
    for (unsigned long long i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}