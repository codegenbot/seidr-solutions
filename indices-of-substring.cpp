#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string text = "abcabcaabcab", target = "aba";
    
    std::vector<int> indices;
    
    for (size_t i = 0; i <= text.length() - target.length(); ++i) {
        if (text.substr(i, target.length()) == target) {
            indices.push_back(i);
        }
    }
    
    for (int idx : indices) {
        std::cout << idx << " ";
    }
    
    return 0;
}