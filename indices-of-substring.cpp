#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += target.size();
    }

    return result;
}

int main() {
    std::string text;
    int size;
    std::cout << "Enter a text: ";
    std::getline(std::cin, text);
    std::cout << "Enter the target string: ";
    std::cin >> size;
    std::string target(size, 'x'); // assuming the target string is of fixed length
    std::cout << "Indices of substring: ";
    for (int i : indicesOfSubstring(text, target)) {
        std::cout << i << " ";
    }
    return 0;
}