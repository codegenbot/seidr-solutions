#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text;
    std::string target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    std::vector<int> indices;

    std::size_t pos = text.find(target);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }

    for (int idx : indices) {
        std::cout << idx << " ";
    }

    return 0;
}