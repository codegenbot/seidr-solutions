#include <vector>
#include <algorithm>
#include <set>
#include <string>

std::string find_max(const std::vector<std::string>& words) {
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a > b;
            }
            return a.length() < b.length();
        });
    
    for (string word : words) {
        set<char> char_set(word.begin(), word.end());
        if (char_set.size() > max_word.length()) {
            max_word = word;
        } else if (char_set.size() == max_word.length()) {
            bool is_max = true;
            for (char c : max_word) {
                if (char_set.find(c) == char_set.end()) {
                    is_max = false;
                    break;
                }
            }
            if (!is_max) {
                max_word = word;
            }
        }
    }
    
    return max_word;
}

int main() {
    assert(find_max({"play", "play", "play"}) == "play");
}