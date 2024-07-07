#include <initializer_list>
#include <vector>
#include <string>

std::vector<std::string> filterByPrefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size();
}

int main() {
    assert(isSame(filterByPrefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}) == true);
    return 0;
}