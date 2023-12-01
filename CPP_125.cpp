#include <iostream>
#include <vector>
#include <string>
#include <assert.h>

std::vector<std::string> split_words(std::string txt);

bool issame(std::vector<std::string> v1, std::vector<std::string> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Test cases
    assert(issame(split_words(""), { "0" }));
    assert(issame(split_words("Hello, World!"), { "Hello", "World!" }));
    // Add more test cases

    return 0;
}

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> result;
    std::string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            hasWhitespace = true;
            if (word != "") {
                result.push_back(word);
                word = "";
            }
        }
        else if (txt[i] == ',') {
            hasComma = true;
            if (word != "") {
                result.push_back(word);
                word = "";
            }
        }
        else {
            word += txt[i];
        }
    }

    if (word != "") {
        result.push_back(word);
    }

    if (!hasWhitespace && !hasComma) {
        int count = 0;
        for (int i = 0; i < word.length(); i++) {
            if (islower(word[i])) {
                count++;
            }
        }
        result.push_back(std::to_string(count));
    }

    return result;
}