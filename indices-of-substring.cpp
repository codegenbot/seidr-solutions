#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        if (text.substr(i, targetLength) == target) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string text;
    std::string target;

    // Read input from user
    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    std::cout << "Enter target: ";
    std::getline(std::cin, target);

    std::vector<int> result = indicesOfSubstring(text, target);

    // Output the indices
    for (int index : result) {
        std::cout << index << " ";
    }

    return 0;
}