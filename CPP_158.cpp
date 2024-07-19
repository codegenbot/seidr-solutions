#include <string>
#include <vector>

std::string solve_task(std::vector<std::string> words) {
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string word : words) {
        if (word.length() == max_word.length() && 
            count(word.begin(), word.end(), unique(word.begin(), word.end())[0]) == 1 &&
            count(word.begin(), word.end(), unique(word.begin(), word.end())[1]) == 1) {
            max_word = word;
            break;
        }
    }
    return max_word;
}

int main() {
    assert((solve_task({"play", "play", "play"}) == "play"));
    return 0;
}