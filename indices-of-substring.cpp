#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;
    int pos = static_cast<int>(text.find(target, 0));
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = static_cast<int>(text.find(target, pos + 1));
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}