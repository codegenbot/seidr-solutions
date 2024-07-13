#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>

int main() {
    char text[100], target[100];
    std::cin.getline(text, 100);
    std::cin.getline(target, 100);

    for (int i = 0; text[i] != '\0'; ++i) {
        text[i] = std::tolower(text[i]);
    }

    for (int i = 0; target[i] != '\0'; ++i) {
        target[i] = std::tolower(target[i]);
    }

    std::vector<int> indices;
    int textLen = strlen(text);
    int targetLen = strlen(target);
    
    for (int i = 0; i < textLen - targetLen + 1; ++i) {
        bool found = true;
        for (int j = 0; j < targetLen; ++j) {
            if (std::tolower(text[i + j]) != std::tolower(target[j])) {
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