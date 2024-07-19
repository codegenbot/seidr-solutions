#include <vector>
#include <set>
#include <string>

std::string find_max(const std::vector<std::string>& words) {
    std::vector<string> words_copy = words; // create a copy of the input vector
    string max_str;
    int max_unique_chars = 0;

    for (const auto& word : words_copy) {
        int unique_chars = 0;
        set<char> char_set(word.begin(), word.end());
        for (auto c : char_set) {
            if (c == ' ') continue; // ignore spaces
            unique_chars++;
        }
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_str)) {
            max_str = word;
            max_unique_chars = unique_chars;
        }
    }

    return max_str;
}

int main() {
    assert(find_max({"play", "play", "play"}) == "play");
    return 0;
}