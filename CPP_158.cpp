
#include <iostream>
#include <string>
#include <cassert>

std::string find_max(const std::vector<std::string>& words) {
    // Initialize the maximum word length to 0
    int max_length = 0;
    // Iterate over the words and find the longest one
    for (auto& word : words) {
        if (word.size() > max_length) {
            max_length = word.size();
        }
    }
    return std::string(max_length, '*');
}

int main() {
    std::vector<std::string> words = {"play", "play", "play"};
    assert(find_max({"play", "play", "play"}) == "play");
    return 0;
}