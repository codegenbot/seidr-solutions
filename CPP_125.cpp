#include <vector>
#include <string>
#include <cassert>

// Function declaration
bool issame(std::vector<std::string> a, std::vector<std::string> b);

// Function definition for split_words
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

// Function definition for issame
bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}