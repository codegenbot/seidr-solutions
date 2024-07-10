#include <string>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b);

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), std::vector<std::string>{"xxx", "xxxAAA", "xxx"}));
    assert(issame(filter_by_prefix({"xxx", "xxxAAA", "xxx"}, "xxx"), std::vector<std::string>{"xxx", "xxxAAA", "xxx"}));

    return 0;
}