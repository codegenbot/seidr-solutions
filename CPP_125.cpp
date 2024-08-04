#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> split_words(std::string input) {
    std::vector<std::string> words;
    
    // Code to split input into words and store in 'words' vector
    
    return words;
}

bool assert_equal(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(assert_equal(split_words(""), {"0"}));

    return 0;
}