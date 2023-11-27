#include <iostream>
#include <vector>
#include <string>

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
    std::string text, target;
    std::cin >> text;
    std::cin >> target;

    std::vector<int> result = indicesOfSubstring(text, target);

    for (int index : result) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}