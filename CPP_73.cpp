#include <vector>
#include <cassert>

namespace Solution {
    int smallest_change(const std::vector<int>& arr) {
        int n = arr.size();
        int changes = 0;
        for (int i = 0; i < n / 2; ++i) {
            changes += (arr[i] != arr[n - i - 1]);
        }
        return changes;
    }
}