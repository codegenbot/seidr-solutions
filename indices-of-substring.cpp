#include <iostream>
#include <string>
#include <list>

int main() {
    std::string text;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);

    std::string target;
    std::cout << "Enter the target substring: ";
    std::getline(std::cin, target);

    int prev_idx = -1;
    std::list<int> result;
    for (size_t i = 0; i < text.length(); ++i) {
        size_t found_idx = text.find(target, prev_idx + target.length());
        if (found_idx != std::string::npos && found_idx >= prev_idx + target.length()) {
            result.push_back(i);
            prev_idx = found_idx; // Update prev_idx for non-overlapping targets
        }
    }

    for (auto index : result) {
        std::cout << index << " ";
    }

    return 0;
}