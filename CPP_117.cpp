#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<std::string> select_words(std::string words, int index) {
    std::vector<std::string> selected_words;
    std::string word = "";
    for (char c : words) {
        if (c == ' ') {
            if (!word.empty()) {
                if (index != 0) {
                    --index;
                } else {
                    selected_words.push_back(word);
                }
                word = "";
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        selected_words.push_back(word);
    }

    return selected_words;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), std::vector<std::string>{"b", "c", "d", "f"}));
    
    return 0;
}