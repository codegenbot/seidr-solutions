```cpp
#include <iostream>
#include <vector>
#include <string>

long unsigned int gcd(long unsigned int a, long unsigned int b) {
    while (b != 0) {
        long unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<long unsigned int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<long unsigned int> result;
    long unsigned int n = text.length();
    long unsigned int m = target.length();

    for (long unsigned int i = 0; i <= n - m; i++) {
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
    long unsigned int GCD = gcd(909378243576ULL, 50); 
    std::cout << "GCD of " << 909378243576ULL << " and " << 50 << ": " << GCD << std::endl;
    
    std::vector<long unsigned int> result = indicesOfSubstring(text, target);
    std::cout << "Indices: ";
    for (long unsigned int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}