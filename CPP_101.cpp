#include <cassert>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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

std::vector<std::string> words_string(const std::string& str) {
    std::vector<std::string> words;
    std::string word;
    for (char c : str) {
        if (c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else if (c != ' ') {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}

int main() {
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    return 0;
}