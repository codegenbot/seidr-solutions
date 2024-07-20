#include <vector>
#include <string>
#include <cassert>

bool issame(const std::string& s) {
    return s.find_first_not_of("abcdefghijklmnopqrstuvwxyz") == std::string::npos;
}

std::vector<std::string> split_words(const std::string& txt) {
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
    if (result.size() == 1 && issame(result[0])) {
        int count = 0;
        for (char c : result[0]) {
            if (c >= 'a' && c <= 'z' && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        result[0] = std::to_string(count);
    }
    return result;
}