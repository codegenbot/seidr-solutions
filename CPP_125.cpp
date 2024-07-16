#include <string>

bool issame(const std::string& s1, const std::string& s2) {
    return s1 == s2;
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
    if (result.empty()) {
        int oddLowerCaseCount = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                oddLowerCaseCount++;
            }
        }
        result.push_back(std::to_string(oddLowerCaseCount));
    }
    return result;
}