#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <cassert>
#include <string>
#include <cstdlib>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> split_words(std::string text) {
    std::vector<std::string> result;
    std::string word = "";
    
    for (char c : text) {
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
    
    if (result.size() == 1 && !isalpha(result[0][0])) {
        int count = 0;
        for (char c : result[0]) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        result[0] = std::to_string(count);
    }
    
    return result;
}