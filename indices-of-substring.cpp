#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int textLength = text.length();
    int targetLength = target.length();
    
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
        }
    }
    
    return indices;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;
    
    std::vector<int> result = indicesOfSubstring(text, target);

    if (result.empty()) {
        std::cout << 0;
    } else {
        for (int i = 0; i < result.size(); i++) {
            std::cout << result[i] << " ";
        }
    }

    return 0;
}