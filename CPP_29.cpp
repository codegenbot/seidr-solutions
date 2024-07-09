#include <vector>
#include <string>

bool issame(std::vector<std::string>, std::vector<std::string>);

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        vector<string> result = filter_by_prefix({b[i]}, "xxx");
        if (!std::includes(a.begin(), a.end(), result.begin(), result.end())) {
            return false;
        }
    }
    return true;
}