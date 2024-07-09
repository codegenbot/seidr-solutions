```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> findIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += target.size();
    }
    return indices;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text: ";
    std::cin >> text;
    std::cout << "Enter the target string: ";
    std::cin >> target;
    std::vector<int> result = findIndices(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}