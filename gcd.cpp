```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

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

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result; // Initialize the vector
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += target.size();
    }
    return result;
}

int main() {
    int a = 0, b = 0;
    while (!(std::cin >> a) || !(std::cin >> b)) {
        std::cout << "Invalid input. Please enter two integers: ";
        std::cin.clear();
        std::cin.ignore(1000000, '\n');
    }
    if (b == 0) {
        std::cout << "GCD of the numbers is: " << a << std::endl;
    } else {
        int result = gcd(a, b);
        std::cout << "GCD of the numbers is: " << result << std::endl;
    }

    std::string text, target;
    if (!(std::getline(std::cin, text)) || !(std::getline(std::cin, target))) {
        std::cout << "Invalid input. Please enter two strings: ";
    }
    if (target.empty()) {
        std::cout << "Error: Target string is empty." << std::endl;
    } else {
        if (!target.empty()) {
            auto indices = indicesOfSubstring(text, target);
            for (int i : indices) {
                std::cout << i << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}