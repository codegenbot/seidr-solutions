#include <iostream>
#include <string>
#include <vector>

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
    
    // Find the indices where target appears in text
    std::string text = "";
    std::cout << "Enter a text: ";
    std::cin >> text;
    std::string target = "";
    std::cout << "Enter a target string: ";
    std::cin >> target;
    std::vector<int> indices = findIndices(text, target);
    
    // Print the indices
    if (indices.size() > 0) {
        std::cout << "Indices where target appears in text: ";
        for (int i : indices) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Target not found in the text." << std::endl;
    }
    
    return 0;
}