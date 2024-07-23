#include <iostream>
#include <string>
#include <vector>

size_t pos;
vector<int> indices;

int main() {
    std::string text, target;
    std::cin >> text >> target;

    pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}