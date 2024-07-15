#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> select_words(std::string phrase, int n) {
    std::vector<std::string> words;
    std::string word;
    for (char c : phrase) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word.push_back(c);
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    std::vector<std::string> result;
    for (int i = 0; i < words.size(); i += n) {
        if (i + n <= words.size()) {
            for (int j = i; j < i + n; ++j) {
                result.push_back(words[j]);
            }
        }
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<std::string> result = select_words("hello world, welcome to coding", 3);
    std::vector<std::string> expected = {"hello", "world,", "welcome"};

    assert(issame(result, expected));

    return 0;
}