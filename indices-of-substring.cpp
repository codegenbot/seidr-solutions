#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;
    if (target.empty()) {
        std::cout << "Target string is empty." << std::endl;
        return 0;
    }

    std::size_t pos = 0;
    while (pos != std::string::npos) {
        pos = text.find(target, pos);
        if (pos != std::string::npos) {
            indices.push_back(static_cast<int>(pos));
            pos += 1;
        }
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}