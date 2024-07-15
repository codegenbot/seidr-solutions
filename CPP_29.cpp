#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<int> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<int> filtered_indices;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i].find(prefix) == 0) {
            filtered_indices.push_back(i);
        }
    }
    return filtered_indices;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") ==
           std::vector<int>{0, 4, 5});
    return 0;
}