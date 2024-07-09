```cpp
#include <vector>
#include <string>

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (int i = 1; i <= str.length(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    std::vector<std::string> b = all_prefixes("WWW");
    assert(issame(all_prefixes("WWW"), b));
    return 0;
}