#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;
    size_t pos = 0;
    while (true) {
        pos = text.find(target, pos);
        if (pos != std::string::npos) {
            indices.push_back(pos);
            pos += (target.empty() ? 1 : target.length());
        } else {
            break;
        }
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}