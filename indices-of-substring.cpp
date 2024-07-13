#include <vector>
#include <iostream>

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int start = 0;
    while (start < text.size()) {
        size_t found = text.find(target, start);
        if (found == std::string::npos) break;
        indices.push_back(found);
        start = found + 1;
    }
    return indices;
}

int main() {
    std::string text;
    cin >> text;
    std::string target;
    cin >> target;
    std::vector<int> result = findIndices(text, target);
    for (int i : result) std::cout << i << " ";
    std::cout << std::endl;
    return 0;