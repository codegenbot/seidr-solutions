#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>&, const std::vector<std::string>&);

std::vector<std::string> filter_by_prefix(const std::vector<std::string>&, const std::string&);

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), 
                  {"xxx", "xxxAAA", "xxx"}));
    assert(issame(filter_by_prefix({"xxx", "xxxAAA", "xxx"}, "xxx"), 
                  {"xxx", "xxxAAA", "xxx"}));

    return 0;
}