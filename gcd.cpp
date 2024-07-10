```cpp
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
        size_t found = static_cast<size_t>(text.find(target, index));
        if (found != std::string::npos) {
            result.push_back(found);
            index = found + 1;
        } else {
            break;
        }
    }

    return result;
}

int main() {
    try {
        std::cout << "GCD of two numbers: ";
        int a, b;
        if (!(std::cin >> a >> b)) {
            throw std::runtime_error("Invalid input. Please enter two integers.");
        }
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
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}