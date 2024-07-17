```
#include <vector>
#include <string>
#include <iostream>

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int start = 0;
    while (start < text.length()) {
        size_t found = text.find(target, start);
        if (found != std::string::npos) {
            indices.push_back(found);
            start = found + 1;
        } else {
            break;
        }
    }
    return indices;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 0;
    int b = 0;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;
    return 0;
}