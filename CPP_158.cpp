#include <string>
#include <vector>
#include <set>

// Function to find the word with the maximum number of unique characters
std::string find_max(std::vector<std::string> words) {
    std::string result = "";
    int max_unique_chars = 0;

    for (const auto& word : words) {
        set<char> unique_chars;
        for (char c : word) {
            unique_chars.insert(c);
        }
        if (unique_chars.size() > max_unique_chars) {
            max_unique_chars = unique_chars.size();
            result = word;
        } else if (unique_chars.size() == max_unique_chars && word < result) {
            result = word;
        }
    }

    return result;
}

int main() {
    // Test the function
    assert(find_max({"play", "play", "play"}) == "play");
    return 0;
}