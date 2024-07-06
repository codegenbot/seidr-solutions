#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> select_words(const std::string& s, int n) {
    std::vector<std::string> words;
    size_t start = 0;
    while (start < s.size()) {
        start = s.find(' ', start);
        if (start == std::string::npos)
            break;
        size_t end = s.find(' ', start + 1);
        if (end == std::string::npos)
            end = s.size();
        words.push_back(s.substr(start + 1, end - start - 1));
        if (++n > 0) {
            --n;
        } else
            break;
    }
    return words;
}

bool issame(char c1, char c2) {
    if (isalpha(c1) && isalpha(c2)) {
        return tolower(c1) == tolower(c2);
    } else {
        return c1 == c2;
    }
}

int main() {
    assert(issame(select_words("a b c d e f", 1)[0], "b"));
    return 0;
}