#include <vector>
#include <string>
#include <cctype>
#include <cassert>

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> words;
    std::string word = "";
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    if (words.size() == 0) {
        int oddCount = 0;
        for (char c : txt) {
            if (std::islower(c) && (c - 'a') % 2 == 1) {
                oddCount++;
            }
        }
        words.push_back(std::to_string(oddCount));
    }
    return words;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    assert(issame(split_words("hello,world"), {"hello", "world"}));
    assert(issame(split_words("ab cde f"), {"ab", "cde", "f"}));
    assert(issame(split_words("programmers"), {"programmers", "1"}));

    return 0;
}