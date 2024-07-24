```
#include <iostream>
#include <string>
#include <vector>

std::vector<int> findIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int prevLast = 0;
    while (true) {
        size_t last = text.find(target, prevLast);
        if (last == std::string::npos) break;
        indices.push_back(last);
        prevLast = last + 1;
    }
    return indices;
}

int main() {
    std::string text;
    std::cin >> text;

    std::string target;
    std::cin >> target;

    std::vector<int> indices = findIndices(text, target);
    for (const auto& i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}