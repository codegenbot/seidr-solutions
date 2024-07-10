#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::cin >> text >> target;
    
    std::vector<int> indices;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
        }
    }
    
    for (int idx : indices) {
        std::cout << idx << " ";
    }
    
    return 0;
}