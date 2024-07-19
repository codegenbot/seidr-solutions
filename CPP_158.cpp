#include <vector>
#include <string>

int find_max(std::vector<std::string> words) {
    if (words.empty()) {
        return 0;
    }
    std::string max_word = words[0];
    for (const auto& word : words) {
        if (word.size() > max_word.size()) {
            max_word = word;
        }
    }
    return max_word.size();
}

int main() {
    std::vector<std::string> words = {"play", "play", "play"};
    cout << find_max(words) << endl;
    return 0;
}