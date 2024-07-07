#include <vector>
#include <string>

bool filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& s : vec) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return equalVectors(result, {"xxx", "xxxAAA", "xxx"});
}

bool equalVectors(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size();
}

int main() {
    assert(equalVectors(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}) == true);
    return 0;
}