#include <set>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return std::set<std::string>(a.begin(), a.end()) == std::set<std::string>(b.begin(), b.end());
}

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(std::issame(all_prefixes("WWW"), {"W", "WW", "WWW"})); 
    return 0;
}