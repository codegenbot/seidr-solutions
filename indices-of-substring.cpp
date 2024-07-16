#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    
    std::cin.ignore(); // Ignore the newline character left in the input buffer
    std::getline(std::cin, target); // Read the target string using std::getline

    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(static_cast<int>(pos));
        pos = text.find(target, pos + 1);
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}