#include <vector>

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

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int result = Solution::smallest_change(arr);
    return 0;
}