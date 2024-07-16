#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;
    if (target.empty()) {
        for (int i = 0; i < text.size(); ++i) {
            indices.push_back(i);
        }
    } else {
        size_t pos = 0;
        while ((pos = text.find(target, pos)) != std::string::npos) {
            indices.push_back(pos);
            pos += 1;
        }
    }

    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}