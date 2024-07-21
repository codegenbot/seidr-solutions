```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    size_t found = 0;
    while ((found = text.find(target, found)) != std::string::npos) {
        indices.push_back(found);
        found += target.size();
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
    std::getline(std::cin, text);
    std::cin.clear(); 
    std::cin.ignore(); 
    std::cout << "Enter the target string for Indices of Substring: ";
    std::cin >> target;
    std::cin.ignore();
    std::vector<int> result = findIndices(text, target);
    for (int i : result)
        std::cout << i << " ";
    return 0;
}