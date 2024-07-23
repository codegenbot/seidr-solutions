```cpp
#include <algorithm>
#include <vector>
#include <string>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        bool found = true;
        for (int j = 0; j < target.size(); ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
            i++; // start looking for the next match from where the last one ended
        }
    }
    return result;
}

#include <iostream>

int main() {
    std::string text, target;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    if (text.empty()) {
        std::cout << "Text cannot be empty." << std::endl;
        return 1;
    }
    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);
    if (target.empty()) {
        std::cout << "Target string cannot be empty." << std::endl;
        return 1;
    }
    auto indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    int a, b;
    std::cout << "Enter two numbers: ";
    if (!(std::cin >> a >> b)) {
        std::cout << "Invalid input." << std::endl;
        return 1;
    }
    std::cout << "GCD of " << a << " and " << b << ": " << gcd(a, b) << std::endl;
    return 0;
}