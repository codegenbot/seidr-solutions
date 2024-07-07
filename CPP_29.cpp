#include <vector>
#include <algorithm>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& str, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& s : str) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

bool is_same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    if (is_same(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"})) {
        std::cout << "Filtering successful." << std::endl;
    } else {
        std::cout << "Filtering failed." << std::endl;
    }
    return 0;
}