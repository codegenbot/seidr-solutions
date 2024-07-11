#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;
    int pos = std::string::npos;
    while ((pos = static_cast<int>(text.find(target, pos + 1))) != std::string::npos) {
        indices.push_back(pos);
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}