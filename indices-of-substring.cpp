#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::string text, target;

    std::getline(std::cin, text);
    std::getline(std::cin, target);

    text.erase(text.find_last_not_of(" \n\r\t")+1);
    target.erase(target.find_last_not_of(" \n\r\t")+1);

    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}