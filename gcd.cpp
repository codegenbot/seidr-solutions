```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int pos = 0;
    
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += target.length();
    }
    
    return result;
}

int main() {
    std::string text;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);

    std::string target;
    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);
    
    auto result = indicesOfSubstring(text, target);
    
    for (int i : result) {
        std::cout << i << " ";
    }
    
    return 0;
}