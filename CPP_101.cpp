#include <iostream>
#include <vector>
#include <sstream>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> words_string(const std::string& input) {
    std::vector<std::string> words;
    std::istringstream iss(input);
    for (std::string word; iss >> word; ) {
        words.push_back(word);
    }
    return words;
}

int main() {
    assert (issame(words_string("ahmed gamal"), {"ahmed", "gamal"}));
    return 0;
}