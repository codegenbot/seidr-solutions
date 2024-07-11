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

    // Get the text and target strings from the user
    std::cout << "Enter the text: ";
    std::cin >> text;
    std::cout << "Enter the target string: ";
    std::cin >> target;

    // Find the indices of the target in the text
    auto indices = findIndices(text, target);

    // Print the indices
    if (indices.empty()) {
        std::cout << "Target not found." << std::endl;
    } else {
        for (int i : indices) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}