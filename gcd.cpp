```cpp
#include <iostream>
#include <vector>
#include <string>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<long long> indicesOfSubstring(std::string text, std::string target) {
    std::vector<long long> result;
    long long n = text.length();
    long long m = target.length();

    for (long long i = 0; i <= n - m; i++) {
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
    long long GCD = gcd(909378243576LL, 50); 
    std::cout << "GCD of " << 909378243576LL << " and " << 50 << ": " << GCD << std::endl;
    
    std::vector<long long> result = indicesOfSubstring(text, target);
    std::cout << "Indices: ";
    for (long long i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}