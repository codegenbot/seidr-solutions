#include <set>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& v) {
    return std::set<std::string>(a.begin(), a.end()) == std::set<std::string>(v.begin(), v.end());
}

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    std::vector<std::string> vectors = {"W", "WW", "WWW"};
    assert(issame(all_prefixes("WWW"), vectors));
    return 0;
}