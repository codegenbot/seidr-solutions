#include <iostream>
#include <vector>

int smallest_change(const std::vector<int>& arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            ++changes;
        }
    }
    return changes;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::cout << "Number of changes needed: " << smallest_change(nums) << std::endl;
    return 0;
}