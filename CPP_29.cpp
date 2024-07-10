#include <vector>
#include <string>
#include <cassert>

bool filter_by_prefix(const std::vector<std::string>& a, const std::string& prefix) {
    for(const std::string& str : a) {
        if(str.find(prefix) == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"));
    assert(filter_by_prefix({"xxx", "xxxAAA", "xxx"}, "xxx"));

    return 0;
}