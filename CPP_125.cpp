#include <vector>
#include <string>

std::vector<std::string> split_words(const std::string& str) {
    std::vector<std::string> words;
    std::string word;
    for (char c : str) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    issame(split_words(""), std::vector<std::string>{"0"});

    return 0;
}