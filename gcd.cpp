#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t index = 0;

    while (index <= text.length() - target.length()) {
        size_t found = text.find(target, index);
        if (found != std::string::npos) {
            result.emplace_back(found);  // Correct usage of push_back
            index = found + 1;
        } else {
            break;
        }
    }

    return result;
}

int main() {
    std::cout << "GCD of two numbers: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << "\n";
    
    // Example usage for indicesOfSubstring function
    std::string text = "banana";
    std::string target = "ana";
    std::vector<int> result = indicesOfSubstring(text, target);
    std::cout << "Indices of substring 'ana' in 'banana': ";
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    
    return 0;
}