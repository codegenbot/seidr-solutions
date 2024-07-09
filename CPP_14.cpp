```cpp
#include <vector>
#include <string>

const std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        std::string prefix = str.substr(0, i);
        if (i > 1) { 
            prefix.push_back(',');
        }
        result.push_back(prefix);
    }
    return result;
}

bool issame(std::vector<std::string> a, const std::vector<std::string>& b) { 
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"})); 
}