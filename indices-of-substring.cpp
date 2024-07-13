#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;
    
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // Search for the next occurrence
    }
    
    return result;
}

int main() {
    int t;
    std::cin >> t;
    std::vector<int> result;
    for(int i = 0; i < t; ++i) {
        std::string text, target;
        std::cin >> text >> target;
        result = indicesOfSubstring(text, target);
        for(auto x : result)
            std::cout << x << " ";
        std::cout << std::endl;
    }
    return 0;
}