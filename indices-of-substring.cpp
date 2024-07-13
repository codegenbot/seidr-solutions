#include <iostream>
#include <vector>
#include <cstring>

char toLower(char c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        if (c >= 'A' && c <= 'Z') {
            return c - 'A' + 'a';
        }
        return c;
    }
    return c;
}

int main() {
    char text[100], target[100];
    std::cin.getline(text, 100);
    std::cin.getline(target, 100);

    char lowercaseText[100] = {};
    for (int i = 0; text[i] != '\0'; ++i) {
        lowercaseText[i] = toLower(text[i]);
    }
    lowercaseText[strlen(text)] = '\0';

    char lowercaseTarget[100] = {};
    for (int i = 0; i < strlen(target); ++i) {
        lowercaseTarget[i] = toLower(target[i]);
    }
    lowercaseTarget[strlen(target)] = '\0';

    if (strlen(target) == 0) {
        std::cout << "0";
        return 0;
    }

    std::vector<int> indices;
    int textLen = strlen(text);
    int targetLen = strlen(target);
    
    for (int i = 0; i <= textLen - targetLen; ++i) {
        bool found = true;
        for (int j = 0; j < targetLen; ++j) {
            if (toLower(lowercaseText[i + j]) != toLower(lowercaseTarget[j])) {
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