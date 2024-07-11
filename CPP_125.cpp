#include <vector>
#include <string>
#include <cassert>
#include <iostream>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> split_words(std::string txt){
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
        int oddLowercaseCount = 0;
        for (char c : txt) {
            if (std::islower(c) && (c - 'a') % 2 == 1) {
                oddLowercaseCount++;
            }
        }
        result.push_back(std::to_string(oddLowercaseCount));
    }
    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
}