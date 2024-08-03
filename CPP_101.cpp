#include <cassert>
#include <vector>
#include <string>
#include <sstream>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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

std::vector<std::string> words_string(const std::string& str) {
    std::vector<std::string> result;
    std::istringstream ss(str);
    std::string word;
    while (std::getline(ss, word, ',')) {
        result.push_back(word);
    }
    return result;
}

assert(issame(words_string("ahmed , gamal"), {"ahmed", "gamal"}));
```