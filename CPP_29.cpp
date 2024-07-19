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

std::vector<std::vector<std::string>> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::vector<std::string>> result;
    for (const auto& str : strings) {
        for (const auto& s : str) {
            if (s.find(prefix) == 0) {
                result.push_back({s});
                break;
            }
        }
    }
    return result;
}

int init() {
    std::vector<std::vector<std::string>> strings = {{{"xxx"},{"asd"},{"xxy"}, {"john doe" }, {"xxxxAAA"}, {"xxx"}}};
    assert(issame(filter_by_prefix(strings, "xxx"), {{{"xxx"},{"xxxAAA"},{"xxx"}}}));
    return 0;
}