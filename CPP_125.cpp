#include <string>
#include <vector>
#include <iostream>
#include <assert.h>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    // Your comparison logic here
    return true; // Placeholder return for now
}

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> words;
    // Your splitting logic here
    return words;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}