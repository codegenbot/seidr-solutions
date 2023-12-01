#include <iostream>
#include <vector>
#include <string>

std::vector<int> findIndicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int textLen = text.length();
    int targetLen = target.length();

    for (int i = 0; i < textLen - targetLen + 1; i++) {
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
    std::cin >> text >> target;

    std::vector<int> indices = findIndicesOfSubstring(text, target);

    for (int i = 0; i < indices.size(); i++) {
        std::cout << indices[i] << " ";
    }

    return 0;
}