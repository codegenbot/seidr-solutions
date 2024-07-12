#include <vector>
#include <string>

bool areEqual(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

}

int main() {
    assert(std::equal(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx").begin(), filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx").end(), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}