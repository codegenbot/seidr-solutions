```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();
  
    for (int i = 0; i < textLength - targetLength + 1; i++) {
        bool found = true;
        for (int j = 0; j < targetLength && j <= targetLength - (i + j); j++) {
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

    std::vector<int> indices = indicesOfSubstring(text, target);
    std::cout << "Indices of substring: ";
    for (int index : indices) {
        std::cout << index << " ";
    }
    std::cout << "\n";

    return 0;
}
```