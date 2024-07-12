#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
  
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    if (text.size() < target.size() || target.empty()) {
        std::cout << "0";
        return 0;
    }

    std::vector<int> indices;

    for (size_t i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(static_cast<int>(i));
        }
    }

    for (int i : indices) {
        std::cout << i << " ";
    }

    return 0;
}