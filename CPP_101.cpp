#include <iostream>
#include <vector>
#include <cassert>
#include <sstream>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (std::size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> words_string(const std::string& words) {
    std::vector<std::string> result;
    std::istringstream iss(words);
    std::string word;

    while (iss >> word) {
        result.push_back(word);
    }

    return result;
}

int main() {
    assert(issame(words_string("ahmed gamal"), {"ahmed", "gamal"}));
    return 0;
}