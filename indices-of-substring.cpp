```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        if (std::equal(text.begin() + i, text.begin() + i + targetLength, target.begin())) {
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

    for (int index : result) {
        std::cout << index << " ";
    }

    return 0;
}
```