```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices(text.length() - target.length() + 1);

    for (int i = 0; i <= text.length() - target.length(); i++) {
        bool found = true;
        for (int j = 0; j < target.length(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices[i] = i;
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices = indicesOfSubstring(text, target);
    for (int index : indices) {
        std::cout << index << " ";
    }
    std::cout << "\n";

    return 0;
}
```