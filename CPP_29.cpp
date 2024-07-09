#include <initializer_list>
#include <vector>
#include <string>

bool vector_issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    bool b = true;
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    return {str for str in vec if str.find(prefix) == 0};
}

int main() {
    assert(vector_issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}