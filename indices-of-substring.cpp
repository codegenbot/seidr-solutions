```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        bool found = true;
        for (int j = 0; j < targetLength && (text[i + j] == target[j] || target[j] == '?'); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found && (i + targetLength >= textLength || target[targetLength - 1] == text[i + targetLength])) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
```