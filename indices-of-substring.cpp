#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        bool match = true;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            indices.push_back(i);
            // Add the target length to i to continue matching after finding a target
            i += targetLength - 1;
        }
    }

    return indices;
}