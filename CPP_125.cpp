#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    if (result.empty()) {
        int count = std::count_if(txt.begin(), txt.end(), [](char c) {
            return std::islower(c) && (c - 'a') % 2 == 1;
        });
        result.push_back(std::to_string(count));
    }
    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}