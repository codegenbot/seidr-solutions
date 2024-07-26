#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <sstream>

namespace contest {
    bool issame(std::vector<std::string> a, std::vector<std::string> b) {
        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());
        return a == b;
    }
}

std::vector<std::string> words_string(const std::string &str) {
    std::vector<std::string> words;
    std::string word;
    std::istringstream iss(str);
    
    while (iss >> word) {
        words.push_back(word);
    }
    
    return words;
}

int main() {
    assert(contest::issame(words_string("ahmed gamal"), words_string("ahmed gamal")));
    return 0;
}