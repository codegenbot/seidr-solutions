#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (std::size_t i = 0; i < vec.size(); ++i) {
        if (vec[i].find(prefix) == 0) {
            result.push_back(vec[i]);
        }
    }
    return result;
}

bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a==b;
}

int main() {
    assert(std::equal(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx").begin(), filter_by_prefix({"xxx", "xxxAAA", "xxx"}.begin(), filter_by_prefix({"xxx", "xxxAAA", "xxx"}.end()));
    return 0;
}