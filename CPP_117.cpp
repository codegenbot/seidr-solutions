#include <vector>
#include <string>
#include <sstream>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<std::string> select_words(std::string input, int n) {
    std::vector<std::string> words;
    std::istringstream iss(input);
    std::string word;
    
    while (iss >> word) {
        if (n-- > 0) {
            words.push_back(word);
        }
    }
    
    return words;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"a"}));
    
    return 0;
}