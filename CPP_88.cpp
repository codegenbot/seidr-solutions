#include <vector>
#include <algorithm>
#include <cassert>

namespace contest {
    std::vector<int> sort_array(std::vector<int> arr) {
        std::sort(arr.begin(), arr.end());
        return arr;
    }

    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }
}

int main() {
    assert(contest::issame(contest::sort_array({21, 14, 23, 11}), std::vector<int>{23, 21, 14, 11});
    return 0;
}