#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int start = 0;
    while (start < text.size()) {
        size_t found = text.find(target, start);
        if (found == std::string::npos) break;
        indices.push_back(found);
        start = found + 1;
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    std::string s1, s2;
    std::cout << "Enter two numbers for GCD: ";
    getline(std::cin, s1);
    std::cout << "for GCD: ";
    getline(std::cin, s2);
    int a = stoi(s1), b = stoi(s2);
    std::cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << std::endl;

    std::string text, target;
    std::cout << "Enter the text string for Indices of Substring: ";
    getline(std::cin, text);
    std::cout << "Enter the target string for Indices of Substring: ";
    getline(std::cin, target);
    std::vector<int> result = findIndices(text, target);
    for (int i : result)
        std::cout << i << " ";
    return 0;
}