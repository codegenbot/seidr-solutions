#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> prefixes;
    std::string prefix;
    for (char c : str) {
        prefix += c;
        prefixes.push_back(prefix);
    }
    return prefixes;
}

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

int main() {
    assert(issame(all_prefixes("WWW"), std::vector<std::string>{"W", "WW", "WWW"}));
    return 0;
}