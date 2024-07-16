#include <vector>
#include <string>

bool issame(const std::vector<std::string>& txt) {
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
    if (result.size() == 1 && std::islower(result[0][0])) {
        int oddCount = 0;
        for (char c : result[0]) {
            if (std::islower(c) && (c - 'a') % 2 == 1) {
                oddCount++;
            }
        }
        result[0] = std::to_string(oddCount);
    }
    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}