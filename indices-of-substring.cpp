#include <iostream>
#include <string>
#include <vector>

int main() {
    int testCases;
    std::cin >> testCases;
    std::cin.ignore();

    while (testCases--) {
        std::string text, target;
        std::getline(std::cin, text);
        std::getline(std::cin, target);

        std::vector<int> indices;
        size_t pos = text.find(target, 0);
        while (pos != std::string::npos) {
            indices.push_back(pos);
            pos = text.find(target, pos + (target.length() > 1 ? 1 : 0));
        }

        for (int i = 0; i < indices.size(); ++i) {
            std::cout << indices[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}