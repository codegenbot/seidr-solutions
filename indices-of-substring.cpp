```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<size_t> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<size_t> indices;
    size_t targetLength = target.length();
    size_t textLength = text.length();

    for (size_t i = 0; i <= textLength - targetLength; i++) {
        bool found = true;
        for (size_t j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text string: ";
    std::getline(std::cin, text);
    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);

    std::vector<size_t> indices = indicesOfSubstring(text, target);
    std::cout << "Indices of substring: ";
    for (size_t index : indices) {
        std::cout << index << " ";
    }
    std::cout << "\n";

    return 0;
}
```