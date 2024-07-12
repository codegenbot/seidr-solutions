#include <iostream>
#include <vector>
#include <string>

std::vector<int> findSubstringIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}

int main() {
    std::string text = "458376766960";
    std::string target = "766960";

    std::vector<int> result = findSubstringIndices(text, target);

    for (int index : result) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}