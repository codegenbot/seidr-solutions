#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int index = 0;
    
    while (index <= text.size() - target.size()) {
        size_t found = text.find(target, index);
        
        if (found != std::string::npos) {
            result.push_back(found);
            index = found + 1; // update the starting point for the next search
        } else {
            break;
        }
    }
    
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::string text;
    std::cin >> text;
    std::cout << "[";
    for (auto i : indicesOfSubstring(text, text.substr(0, 1))) {
        std::cout << i;
        if (i != text.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    return 0;
}