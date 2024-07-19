#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> solve(std::string txt) {
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
    if (result.size() == 0) {
        int oddLowercaseCount = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                oddLowercaseCount++;
            }
        }
        result.push_back(std::to_string(oddLowercaseCount));
    }
    return result;
}