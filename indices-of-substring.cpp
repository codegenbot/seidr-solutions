#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;
    size_t pos = 0;
    
    while (pos <= text.length() - target.length()) {
        pos = text.find(target, pos);
        if (pos == std::string::npos) break;
        indices.push_back(pos);
        pos++;
    }

    for (int index : indices) {
        std::cout << index << " ";
    }

    return 0;
}