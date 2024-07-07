```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> indices(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // to find overlapping occurrences
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

    std::vector<int> indices = indices(text, target);
    
    for (int index : indices) {
        std::cout << index << " ";
    }
    return 0;
}