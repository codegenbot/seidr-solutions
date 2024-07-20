#include <vector>
#include <iostream>
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
    std::cout << "Enter integer 1 for GCD: ";
    std::cin >> a;
    std::cout << "Enter integer 2 for GCD: ";
    std::cin >> b;

    std::string text;
    std::cout << "Enter the text for Indices of Substring: ";
    std::getline(std::cin, text);

    std::string target;
    std::cout << "Enter the target string for Indices of Substring: ";
    std::getline(std::cin, target);
    std::vector<int> result = findIndices(text, target);
    for (int i : result)
        std::cout << i << " ";
    std::cout << "\n";
    std::cout << "GCD is: " << gcd(a, b) << std::endl;
    return 0;
}