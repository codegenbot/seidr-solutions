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

    std::vector<size_t> indices;
    size_t pos = 0;
    size_t targetLength = target.length();

    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);

        if (targetLength == 0) {
            pos += 1; // Case for empty target
        } else {
            pos += (pos == text.find(target, pos) ? 1 : 1); // Always increment by 1 for overlapped targets
        }
    }

    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}