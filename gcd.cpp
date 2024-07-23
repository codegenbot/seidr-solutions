#include <iostream>
#include <vector>
#include <string>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = -1; i <= n - m; i++) {
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
    std::vector<int> result;

    result = indicesOfSubstring(text, target);
    std::cout << "Indices: ";
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    long long a = 909378243576LL;
    int b = 50; 
    std::cout << "GCD of " << a << " and " << b << ": " << gcd(a, b) << std::endl;

    return 0;
}