#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <sstream>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<std::string> words_string(std::string input) {
    std::vector<std::string> words;
    std::istringstream iss(input);
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