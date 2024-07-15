#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

std::string find_max(const std::vector<std::string>& words) {
    std::string result;
    int max_unique_chars = 0;

    for (const std::string& word : words) {
        int unique_chars = std::unordered_set<char>(word.begin(), word.end()).size();

        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < result)) {
            max_unique_chars = unique_chars;
            result = word;
        }
    }

    return result;
}

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    return 0;
}