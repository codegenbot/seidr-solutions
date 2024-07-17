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
    if(a > b) return a;
    else return b;
}

int main() {
    int a = 0;
    int b = 0;
    bool validInput = false;

    while(!validInput) {
        std::cout << "Enter two numbers: ";
        std::cin >> a >> b;
        if(a > 0 && b > 0) {
            validInput = true;
        } else {
            std::cout << "Please enter positive integers." << std::endl;
        }
    }

    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;

    return 0;
}