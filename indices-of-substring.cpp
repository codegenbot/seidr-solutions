    #include <iostream>
#include <string>
#include <list>

std::list<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    int prev_idx = -1;
    std::list<int> result;
    for (size_t i = 0; i < text.length(); ++i) {
        size_t found_idx = text.find(target, prev_idx + target.length());
        if (found_idx != std::string::npos && found_idx >= prev_idx + target.length()) {
            result.push_back(i);
            prev_idx = found_idx; // Update prev_idx for non-overlapping targets
        }
    }
    return result;
}

int main() {
    std::string text = "hello world";
    std::string target = "ll";
    std::list<int> indices = indicesOfSubstring(text, target);
    for (auto index : indices) {
        std::cout << index << " ";
    }
    return 0;
}