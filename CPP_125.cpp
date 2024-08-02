#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> split_words(std::string txt, std::vector<std::string> b){
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

int main(){
    assert(issame(split_words("example text"), std::vector<std::string>{"example", "text"}));
    return 0;
}