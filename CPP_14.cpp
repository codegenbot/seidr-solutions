#include <vector>
#include <string>

bool issame(const std::string& s1, const stdstring& s2) {
    if(s1.size() != s2.size()) {
        return false;
    }
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<stdstring> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}