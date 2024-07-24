#include <iostream>
#include <string>
#include <vector>

std::vector<int> findIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int prevLast = 0;
    while ((int last = text.find(target, prevLast)) != std::string::npos) {
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
}