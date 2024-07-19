#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}