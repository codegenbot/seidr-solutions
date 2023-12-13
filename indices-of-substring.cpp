```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<size_t> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<size_t> indices;
    size_t targetLength = target.length();
    size_t textLength = text.length();
  
    for (size_t i = 0; i < textLength - targetLength + 1; i++) {
        bool found = true;
        for (size_t j = 0; j < targetLength && j <= targetLength - (i + j); j++) {
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
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<size_t> indices = indicesOfSubstring(text, target);
    for (size_t i = 0; i < indices.size(); i++) {
        std::cout << indices[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
```