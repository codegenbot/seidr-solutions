#include <vector>
#include <string>
#include <cassert>
#include <sstream>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> words_string(const std::string& input) {
    std::istringstream iss(input);
    std::vector<std::string> words;
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    assert(issame(words_string("ahmed gamal"), {"ahmed", "gamal"}));
    return 0;
}