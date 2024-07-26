#include <vector>
#include <algorithm>
#include <cassert>

namespace contest {
    std::vector<int> sort_array(const std::vector<int>& arr) {
        std::vector<int> sorted_arr = arr;
        std::sort(sorted_arr.begin(), sorted_arr.end(), std::greater<int>());
        return sorted_arr;
    }

    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }
}

int main() {
    assert(contest::issame(contest::sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}