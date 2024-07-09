#include <vector>
#include <string>

std::vector<std::pair<int, std::string>> select_words(const std::string& input, int n) {
    std::vector<std::pair<int, std::string>> result;
    size_t start = 0;
    for (size_t end = 0; end <= input.size(); ) {
        if (end == input.size() || input[end] != ' ') {
            string word = input.substr(start, end - start);
            if (!word.empty()) {
                result.emplace_back(1, word);
            }
            start = end + 1;
        }
        ++end;
    }
    return std::vector<std::pair<int, std::string>>(result.begin(), result.end());
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}