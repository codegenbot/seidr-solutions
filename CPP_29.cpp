#include <vector>
#include <string>
#include <cassert>

bool filter_by_prefix(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, {"xxx"}));
    return 0;
}