#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& v, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : v) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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

int main() {
    assert(issame({filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx")}, {{"xxx"}, {"xxxAAA"}, {"xxx"}}));
    return 0;
}