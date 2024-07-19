#include <algorithm>
#include <vector>
#include <string>
#include <cctype>

bool issame(const vector<string>& a, const vector<string>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> split_words(const std::string &txt) {
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
        int count = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        result.push_back(std::to_string(count));
    }
    return result;
}

assert issame(split_words("") , {"0"});