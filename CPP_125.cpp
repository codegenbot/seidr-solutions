#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> split_words(std::string input) {
    std::vector<std::string> words;
    
    int pos = 0;
    while (pos < input.size()) {
        std::string word;
        while (pos < input.size() && input[pos] != ' ') {
            word += input[pos];
            pos++;
        }
        words.push_back(word);
        pos++;
    }
    
    return words;
}

bool assert_equal(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(assert_equal(split_words(""), {"0"}));

    return 0;
}