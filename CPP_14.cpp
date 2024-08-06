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

bool issame(std::vector<std::string> a, std::vector<std::string> otherVector) {
    if (a.size() != otherVector.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != otherVector[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(std::issame(std::all_prefixes("WWW"), {"W", "WW", "WWW"}));
}