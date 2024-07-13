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
    
    for (int i = 0; i <= textLen - targetLen; ++i) {
        bool found = true;
        int j;
        for (j = 0; j < targetLen && i + j < textLen; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found && j == targetLen) {
            indices.push_back(i);
        }
    }

    if (indices.size() == 0) {
        std::cout << "0";
    } else {
        for (size_t i = 0; i < indices.size(); ++i) {
            std::cout << indices[i] << " ";
        }
    }

    return 0;
}