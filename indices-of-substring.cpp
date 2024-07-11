```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int start = 0;
    while ((start = text.find(target, start)) != std::string::npos) {
        indices.push_back(start);
        start += target.size();
    }
    return indices;
}

int main() {
    std::string text;
    std::cin >> text;
    std::string target;
    std::cin >> target;
    std::vector<int> result = findIndices(text, target);
    for (int i : result) {
        std::cout << i << std::endl;
    }
    return 0;
}