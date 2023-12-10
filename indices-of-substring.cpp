```c++
#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int textLength = text.length();
    int targetLength = target.length();
    
    for (int i = 0; i <= textLength - targetLength; i++) {
        bool match = true;
        for (int j = 0; j < targetLength; j++, i++) {
            if (text[i + j] != target[j] || j == targetLength - 1) {
                match = false;
                break;
            }
        }
        if (match) {
            indices.push_back(i - targetLength);
        }
        i--;
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
    
    return 0;
}
```