```
#include <initializer_list>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) { 
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

const std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));