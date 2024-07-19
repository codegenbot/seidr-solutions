#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> split_words(const std::string &txt) {
    ...
}

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}