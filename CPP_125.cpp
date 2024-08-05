#include <vector>
#include <string>
#include <cassert>
#include <sstream>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> split_words(const std::string& s) {
    std::vector<std::string> words;
    std::istringstream iss(s);

    while (iss >> s) {
        words.push_back(s);
    }

    return words;
}

int main() {
    assert(issame(split_words(""), {}));
}