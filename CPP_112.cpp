#include <vector>
#include <string>
#include <algorithm>

std::pair<std::vector<std::string>, bool> reverse_delete(const std::string& str, const std::string& sub) {
    std::vector<std::string> result;
    for (int i = 0; i < str.length(); ++i) {
        if (str.substr(i, sub.length()).compare(sub) == 0) {
            result.push_back("True");
            i += sub.length() - 1;
        } else {
            result.push_back(str.substr(i, 1));
        }
    }
    return {result, true};
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    auto result = reverse_delete("mamma", "mia");
    assert(issame({""}, {{"True"}}));  
    return 0;
}