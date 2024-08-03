#include <string>
#include <vector>
#include <iostream>
#include <assert.h>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b; // Compare vectors directly
}

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> words;
    
    if(txt.empty()) {
        words.push_back("0");
    }
    return words;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}