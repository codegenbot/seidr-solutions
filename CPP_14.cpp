#include <vector>
#include <string>
#include <cassert>

bool std::issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    std::string prefix = "";
    for (char c : str) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

int main() {
    assert(std::issame(all_prefixes("WWW"), std::vector<std::string>{"W", "WW", "WWW"}));
    return 0;
}