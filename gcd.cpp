#include <iostream>
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
    std::string text, target;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    std::cout << "Enter the target: ";
    std::getline(std::cin, target);
    
    size_t pos = 0;
    std::vector<size_t> indices;
    while ((pos = text.find(target)) != std::string::npos) {
        indices.push_back(pos);
        text.erase(pos, target.length());
    }
    for (size_t i = 0; i < indices.size(); ++i) {
        if (indices[i] + target.length() > text.length()) break;
        size_t nextPos = text.find(target, indices[i] + target.length());
        if (nextPos == std::string::npos) break;
        indices.push_back(nextPos);
    }
    
    for (size_t i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    int a, b;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    int result = gcd(a, b);
    std::cout << "GCD of the numbers is: " << result << std::endl;
    
    return 0;
}