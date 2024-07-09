```cpp
#include <iostream>
#include <vector>

int findGCD(int a, int b) {
    if (b == 0) return std::abs(a);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return std::abs(b); 
}

std::vector<int> findIndices(std::string text, std::string target) {
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
        }
    }
    return result;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    int result = findGCD(a, b);
    std::cout << "The GCD is: " << result << std::endl;

    std::string text = "Hello World! Hello";
    std::string target = "ello";
    std::vector<int> indices = findIndices(text, target);

    if (indices.empty()) {
        std::cout << "Target not found in the text." << std::endl;
    } else {
        std::cout << "Indices: ";
        for (int index : indices) {
            std::cout << index << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}