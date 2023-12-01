#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.size();
    int textLength = text.size();

    if (targetLength == 0) {
        return indices;
    }

    for (int i = 0; i < textLength - targetLength + 1; i++) {
        if (text.substr(i, targetLength) == target) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    std::cout << "Enter text string: ";
    std::getline(std::cin, text);
    std::cout << "Enter target string: ";
    std::getline(std::cin, target);

    std::vector<int> result = indicesOfSubstring(text, target);

    std::cout << "Indices where target appears: ";
    for (int index : result) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}