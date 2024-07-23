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

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    if (!issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), 
               filter_by_prefix({"xxxAAA"}, "xxx"))) {
        return 1;
    }
    return 0;
}