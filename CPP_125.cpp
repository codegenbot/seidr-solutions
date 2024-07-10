#include <vector>
#include <string>
#include <algorithm>

bool operator==(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) return false;
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    assert(split_words("") == std::vector<std::string>({"0"}));
    return 0;
}

std::vector<std::string> split_words(string txt) {
    vector<string> result;
    bool inWord = false;
    string word = "";

    for (char c : txt) {
        if (!inWord && !isalnum(c)) {
            // Check for commas
            if (c == ',') {
                continue;
            }
            inWord = true;
        } else if (inWord && !isalnum(c)) {
            result.push_back(word);
            word = "";
            inWord = false;
        } else {
            word += c;
        }
    }

    if (inWord) {
        result.push_back(word);
    }
    return result;
}