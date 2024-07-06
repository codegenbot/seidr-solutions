#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!a[i].compare(0, a[i].size(), b[i]) == 0) { 
            return false;
        }
    }
    return true;
}

bool select_words(std::vector<std::string> input) {
    std::vector<std::string> output;
    for (const auto& word : input) {
        if (!issame(word, output)) {
            output.push_back(word);
        }
    }
    return issame(input, output);
}