#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string &text, const std::string &target) {
    std::vector<int> indices;
    size_t targetLength = target.size();
    size_t textLength = text.size();

    if (targetLength == 0) {
        return indices;
    }

    for (size_t i = 0; i <= textLength - targetLength; i++) {
        bool found = true;
        for (size_t j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]-'0') {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text: ";
    std::cin >> text;
    std::cout << "Enter the target: ";
    std::cin >> target;

    std::vector<int> result = indicesOfSubstring(text, target);

    std::cout << "Indices of substring: ";
    for (int index : result) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}