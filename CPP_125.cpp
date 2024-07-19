#include <string>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

std::vector<std::string> process_text(const std::string& txt) {
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
        int oddCount = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                oddCount++;
            }
        }
        result.push_back(std::to_string(oddCount));
    }
    return result;
}