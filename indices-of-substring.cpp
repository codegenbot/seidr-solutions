#include <iostream>
#include <vector>
#include <string>

std::vector<int> findSubstringIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLen = target.length();
    int textLen = text.length();

    for (int i = 0; i <= textLen - targetLen; i++) {
        bool match = true;
        for (int j = 0; j < targetLen; j++) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    getline(std::cin, text);
    getline(std::cin, target);

    std::vector<int> indices = findSubstringIndices(text, target);
    for (int i = 0; i < indices.size(); i++) {
        std::cout << indices[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}