#include <initializer_list>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& vec) {
    return a.size() == vec.size() && std::equal(a.begin(), a.end(), vec.begin());
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    return {str for str in vec if str.find(prefix) == 0};
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}