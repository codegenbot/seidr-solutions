```cpp
#include <vector>
#include <string>
#include <unordered_map>

bool issame(std::vector<std::pmr::string> a, std::vector<std::pmr::string> b);

std::vector<std::pmr::string> filter_by_prefix(std::vector<std::pmr::string> strings, std::pmr::string prefix);

bool issame(std::vector<std::pmr::string> a, std::vector<std::pmr::string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<std::pmr::string> filter_by_prefix(std::vector<std::pmr::string> strings, std::pmr::string prefix) {
    std::vector<std::pmr::string> filteredStrings;

    for (const auto& str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filteredStrings.push_back(str);
        }
    }

    return filteredStrings;
}

int main() {
    assert(::issame(::filter_by_prefix({ "xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx" }, "xxx"), { "xxx", "xxxAAA", "xxx" }));

    return 0;
}
```