#include <iostream>
#include <vector>
#include <string>

std::vector<int> indices(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += target.size();
    }

    return result;
}

int main() {
    // Read input from user
    std::string text;
    std::cout << "Enter the text: ";
    std::cin >> text;

    std::string target;
    std::cout << "Enter the target string: ";
    std::cin >> target;

    // Return output corresponding to the task description
    auto indicesVector = indices(text, target);

    for (const auto& index : indicesVector) {
        std::cout << "The target string appears at index " << index << ".\n";
    }

    return 0;
}