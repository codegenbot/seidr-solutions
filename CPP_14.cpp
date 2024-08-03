#include <string>
#include <vector>

std::vector<std::string> b(std::string str) {
    std::vector<std::string> prefixes;
    for (int i = 0; i < str.size(); ++i) {
        prefixes.push_back(str.substr(0, i + 1));
    }
    return prefixes;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    auto all_prefixes = b;
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}