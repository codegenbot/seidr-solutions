#include <vector>
#include <string>

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (int i = 1; i <= str.length(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

int main() {
    assert(std::equal(all_prefixes("WWW"), std::vector<std::string>({"W", "WW", "WWW"})));
    return 0;
}