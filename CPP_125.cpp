#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using myString = std::string;

bool issame(std::vector<myString> a, std::vector<myString> b) {
    return a == b;
}

std::vector<myString> split_words(myString txt) {
    std::vector<myString> result;
    myString word = "";
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
    if (result.size() == 1 && result[0].find_first_not_of("abcdefghijklmnopqrstuvwxyz") == std::string::npos) {
        int oddCount = 0;
        for (char c : result[0]) {
            if (std::islower(c) && ((c - 'a') % 2 == 1)) {
                oddCount++;
            }
        }
        result = {std::to_string(oddCount)};
    }
    return result;
}

int main() {
    assert(issame(split_words(""), std::vector<myString>{}));
    return 0;
}