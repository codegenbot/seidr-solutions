```cpp
#include <algorithm>
#include <vector>

std::size_type count_sameness(const std::vector<std::vector<int>>& vec) {
    std::size_type total_count = 0;
    for (const auto& v : vec) {
        bool is_same = false;
        for (const auto& w : vec) {
            if (issame(v, w)) {
                is_same = true;
                break;
            }
        }
        if (!is_same) {
            sort_third(v);
            total_count++;
        }
    }
    return total_count;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sort_third(std::vector<int> v) {
    std::sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i += 2) {
        std::swap(v[i - 1], v[i]);
    }
    return v;
}