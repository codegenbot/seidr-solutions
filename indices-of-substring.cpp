```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

std::vector<std::string::size_type> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<std::string::size_type> indices;
    std::string::size_type targetLength = target.length();
    std::string::size_type textLength = text.length();

    for (std::string::size_type i = 0; i <= textLength - targetLength; i++) {
        bool found = true;
        for (std::string::size_type j = 0; j < targetLength; j++) {
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

    std::vector<std::string::size_type> indices = indicesOfSubstring(text, target);
    std::cout << "Indices of substring: ";
    for (auto index : indices) {
        std::cout << index << " ";
    }
    std::cout << "\n";

    return 0;
}
```