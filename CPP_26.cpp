#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(const std::vector<int>& arr) {
    std::vector<int> unique_arr = arr;
    std::sort(unique_arr.begin(), unique_arr.end());
    auto last = std::unique(unique_arr.begin(), unique_arr.end());
    unique_arr.erase(last, unique_arr.end());
    return unique_arr;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

return 0;