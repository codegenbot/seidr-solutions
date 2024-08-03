#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

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
    if (words.size() == 1 && words[0].find_first_not_of("abcdefghijklmnopqrstuvwxyz") == std::string::npos) {
        int oddCount = 0;
        for (char c : words[0]) {
            if (std::islower(c) && (c - 'a') % 2 == 1) {
                oddCount++;
            }
        }
        words[0] = std::to_string(oddCount);
    }
    return words;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(split_words("") ,{"0"}));
    std::vector<std::string> v1 = {"apple", "banana", "cherry"};
    std::vector<std::string> v2 = {"apple", "banana", "cherry"};

    if (issame(v1, v2)) {
        // Do something
    }

    return 0;
}