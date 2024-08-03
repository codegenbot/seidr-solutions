#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> b(std::string str) {
    std::vector<std::string> prefixes;
    std::string prefix = "";
    for (char c : str) {
        prefix += c;
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> all_prefixes(std::string str) {
    return b(str);
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}