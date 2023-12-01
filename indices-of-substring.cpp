#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t targetLength = target.size();
    size_t textLength = text.size();

    if (targetLength > textLength) {
        return indices;
    }

    for (size_t i = 0; i <= textLength - targetLength; i++) {
        bool found = true;
        size_t j;
        for (j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found || j == targetLength - 1) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string text = "IcIcM-Ic";
    std::string target = "Ic";

    std::vector<int> result = indicesOfSubstring(text, target);

    for (const auto& index : result) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}