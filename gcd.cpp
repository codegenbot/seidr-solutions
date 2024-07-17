#include <iostream>
#include <string>

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main() {
    std::string text;
    std::string target;

    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    std::cout << "Enter the target substring: ";
    std::getline(std::cin, target);

    int idx = 0;
    std::vector<int> indices;

    while ((idx = text.find(target)) != std::string::npos) {
        indices.push_back(idx);
        text.erase(idx, target.length());
    }

    for (int i : indices) {
        std::cout << "Target found at index: " << i << std::endl;
    }

    int a = 0;
    int b = 0;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;

    return 0;
}