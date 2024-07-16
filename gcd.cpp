```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
            if (i + j >= text.size()) {
                found = false;
                break;
            }
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; 
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "GCD of " << num1 << " and " << num2 << ": " << gcd(num1, num2) << std::endl;

    std::string text, target;
    std::cout << "Enter the text: ";
    getline(std::cin, text);
    std::cout << "Enter the target string: ";
    getline(std::cin, target);
    std::vector<int> indices = indicesOfSubstring(text, target);
    if (indices.empty()) {
        std::cout << "Target not found in the text." << std::endl;
    } else {
        std::cout << "Indices of substring: ";
        for (int i : indices) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}