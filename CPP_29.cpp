#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        bool found = false;
        for (size_t j = 0; j < b.size(); ++j) {
            if (a[i] == b[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i].find(prefix) == 0) {
            result.push_back(vec[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), std::vector<std::string>{"xxx", "xxxAAA", "xxx"}));
    return 0;
}