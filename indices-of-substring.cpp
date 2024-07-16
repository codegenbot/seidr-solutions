#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    if (text.empty() || target.empty()) {
        std::cout << "Input strings cannot be empty.";
        return 0;
    }

    size_t target_length = target.length();
    std::vector<size_t> indices;

    for (size_t i = 0; i <= text.length() - target_length; ++i) {
        if (text.substr(i, target_length) == target) {
            indices.push_back(i);
        }
    }

    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}