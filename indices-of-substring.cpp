#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;
    
    std::vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        if (!indices.empty() && pos == indices.back()) {
            pos++;
            continue;
        }
        indices.push_back(static_cast<int>(pos));
        pos += 1;
    }
    
    for (int i : indices) {
        std::cout << i << " ";
    }
    
    return 0;
}