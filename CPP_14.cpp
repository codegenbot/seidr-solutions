```cpp
#include <vector>
#include <string>

std::vector<std::string> all_prefixes(const std::string& s) {
    std::vector<std::string> prefixes;
    for (int i = 0; i <= s.size(); ++i) {
        prefixes.push_back(s.substr(0, i));
    }
    return prefixes;
}

bool isSame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(isSame(all_prefixes("WWW") , {"W", "WW", "WWW"}));
    return 0;
}