#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& s : vec) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> c = b;
    return (a.size() == c.size()) && std::equal(a.begin(), a.end(), c.begin());
}

int main() {
    int main2() {
        if (!issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"})) {
            return 1;
        }
        return 0;
    }
    main2();
}