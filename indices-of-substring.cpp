#include <iostream>
#include <vector>
#include <string>

std::vector<int> findSubstringIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();

    for (int i = 0; i < textLength - targetLength + 1; i++) {
        bool found = true;

        for (int j = 0; j < targetLength && found; j++) {
            if (text[i + j] != target[j]) {
                found = false;
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
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> result = findSubstringIndices(text, target);

    if (result.empty()) {
        std::cout << "0" << std::endl;
    } else {
        for (int i = 0; i < result.size(); i++) {
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}