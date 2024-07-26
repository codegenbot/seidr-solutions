#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <sstream>

std::vector<std::string> words_string(const std::string& input) {
    std::istringstream iss(input);
    std::vector<std::string> tokens;
    std::string word;
    while (iss >> word) {
        tokens.push_back(word);
    }
    return tokens;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    return 0;
}