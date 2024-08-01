#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::vector<int> indices;
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    size_t pos = 0;
    while (pos != text.length()) {
        pos = text.find(target, pos);
        if (pos == std::string::npos) break;
        indices.push_back(pos);
        pos += target.length() > 0 ? target.length() : 1;
    }

    for (int idx : indices) {
        std::cout << idx << " ";
    }

    return 0;
}