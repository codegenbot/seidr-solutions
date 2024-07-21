#include <iostream>
#include <vector>
#include <string>

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
    int a, b;
    std::cout << "Enter two integers for GCD: ";
    std::cin >> a;
    std::cin.ignore();
    std::cin >> b;
    std::cout << gcd(a, b) << std::endl;

    std::string text, target;
    std::cout << "Enter the text string for Indices of Substring: ";
    std::cin >> text;
    std::cin.ignore();
    std::getline(std::cin, target);
    std::cout << "Enter the target string for Indices of Substring: ";
    std::vector<int> result = findIndices(text, target);
    for (int i : result)
        std::cout << i << " ";
    return 0;
}