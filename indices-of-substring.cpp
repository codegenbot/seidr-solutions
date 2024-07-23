#include <vector>
#include <string>
#include <iostream>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    for (int i = 0; ; i++) {
        size_t pos = text.find(target, i);
        if (pos == std::string::npos) break;
        result.push_back(pos);
        i = pos + 1;
    }
    return result;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text: ";
    std::cin >> text;
    std::cout << "Enter the target string: ";
    std::cin >> target;
    
    std::vector<int> indices = indicesOfSubstring(text, target);
    
    if (indices.empty()) {
        std::cout << "Target not found in the text." << std::endl;
    } else {
        std::cout << "Indices of substring are: ";
        for (int index : indices) {
            std::cout << index << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}