```cpp
#include <iostream>
#include <vector>
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

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result = {}; // Initialize the vector
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += target.size();
    }
    return result;
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

    std::string text, target;
    std::cout << "Enter text: ";
    std::getline(std::cin, text);
    std::cout << "Enter target string: ";
    std::getline(std::cin, target);

    auto indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}