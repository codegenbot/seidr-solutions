#include <iostream>
#include <vector>
#include <cstring>

int main() {
    char text[100], target[100];
    std::cin.getline(text, 100);
    std::cin.getline(target, 100);

    std::vector<int> indices;
    int textLen = strlen(text);
    int targetLen = strlen(target);
    
    for (int i = 0; i < textLen - targetLen + 1; ++i) {
        bool found = true;
        for (int j = 0; j < targetLen && i + j < textLen && text[i + j] != '\0' && target[j] != '\0'; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }

    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}