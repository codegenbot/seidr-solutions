```cpp
#include <iostream>
#include <cstdlib>
#include <string>

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; 
}

int main() {
    int a, b;
    std::cout << "Enter first number: ";
    if (!(std::cin >> a)) {
        std::cerr << "Invalid input for the first number." << std::endl;
        return 1;
    }

    std::cout << "Enter second number: ";
    if (!(std::cin >> b)) {
        std::cerr << "Invalid input for the second number." << std::endl;
        return 1;
    }
    int result = gcd(a, b);
    std::cout << "GCD of the numbers is: " << result << std::endl;
    return 0;
}

#include <algorithm>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        size_t pos = text.find(target, i);
        while (pos != std::string::npos) {
            result.push_back(i);
            pos = text.find(target, pos + target.size());
        }
    }
    return result;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);
    auto indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    return 0;
}