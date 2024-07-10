```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> all_prefixes(const std::string& s) {
    std::vector<std::string> result;
    for (int i = 0; i <= s.size(); i++) {
        result.push_back(s.substr(0, i));
    }
    return result;
}

int main() {
    vector<string> b = {"W", "W", "W"};
    vector<vector<string>> result = {{all_prefixes("WWW")}};
    assert(issame(result[0][0], b));
}