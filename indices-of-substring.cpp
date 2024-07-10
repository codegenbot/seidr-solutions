#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<int> indices;

    if (target.empty()) {
        for (int i = 0; i <= text.length() - target.length(); ++i) {
            bool match = true;
            for (int j = 0; j < target.length(); ++j) {
                if (text[i + j] != target[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                indices.push_back(i);
            }
        }
    } else {
        size_t pos = text.find(target, 0);
        while (pos != std::string::npos) {
            indices.push_back(static_cast<int>(pos));
            pos = text.find(target, pos + 1);
        }
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}