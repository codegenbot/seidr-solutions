```
#include <vector>
#include <string>

bool issame(const std::string& s1, const std::string& s2) {
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

std::vector<std::string> all_prefixes(const std::string& str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(std::vector<std::string> expected = all_prefixes("WWW") && issame(expected[0], expected[1]));
    return 0;
}