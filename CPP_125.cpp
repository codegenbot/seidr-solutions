```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

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

int count_odd_letters(std::string txt) {
    int count = 0;
    for (int i = 0; i < txt.length(); i++) {
        if (std::islower(txt[i])) {
            int letterOrder = txt[i] - 'a';
            if (letterOrder % 2 != 0) {
                count++;
            }
        }
    }
    return count;
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
                word