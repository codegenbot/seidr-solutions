#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    for (int i = 0; target[i] != '\0'; ++i) {
        target[i] = std::tolower(target[i]);
    }

    if (target.empty()) {
        std::cout << "0";
        return 0;
    }

    std::vector<int> indices;
    int textLen = text.length();
    int targetLen = target.length();
    
    for (int i = 0; i < textLen - targetLen + 1; ++i) {
        bool found = true;
        for (int j = 0; j < targetLen; ++j) {
            if (std::tolower(text[i + j]) != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }

    if (indices.empty()) {
        std::cout << "0";
    } else {
        for (size_t i = 0; i < indices.size(); ++i) {
            std::cout << indices[i] << " ";
        }
    }

    return 0;
}