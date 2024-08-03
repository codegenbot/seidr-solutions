#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });
    return arr;
}

int main() {
    std::vector<int> arr = {9, 5, 3, 6, 12};
    std::vector<int> sorted_arr = sort_array(arr);
    std::vector<int> expected_output = {3, 5, 6, 9, 12};
    assert(sorted_arr == expected_output);

    return 0;
}