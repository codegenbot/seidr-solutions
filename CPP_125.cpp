#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

bool issame(char a, char b) {
    return a == b;
}

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> result;
    std::string word = "";
    for(char c : txt) {
        if(c == ' ' || c == ',') {
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
        int count = std::count_if(txt.begin(), txt.end(), [](char c) {
            return std::islower(c) && (c-'a') % 2 == 1;
        });
        result.push_back(std::to_string(count));
    }
    return result;
}

int main() {
    assert(issame('a', 'a'));
    assert(issame('b', 'b'));

    std::string text = "hello, world";
    std::vector<std::string> words = split_words(text);
    for (const auto& word : words) {
        std::cout << word << std::endl;
    }

    assert(split_words("").front() == "0");

    return 0;
}