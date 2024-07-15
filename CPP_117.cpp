
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> select_words(std::string sentence, int n) {
    std::vector<std::string> words;
    std::string word;
    for (char c : sentence) {
        if (c != ' ') {
            word += c;
        } else {
            if (!word.empty()) {
                words.push_back(word);
            }
            word.clear();
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    std::vector<std::string> result;
    for (int i = n; i < words.size(); i += n) {
        result.push_back(words[i]);
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