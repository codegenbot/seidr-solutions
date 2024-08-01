#include <vector>
#include <algorithm>
#include <cassert>

bool issame(int a, int b) {
    int count_a = __builtin_popcount(a);
    int count_b = __builtin_popcount(b);
    if (count_a == count_b) {
        return a < b;
    }
    return count_a < count_b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return issame(a, b);
    });
    return arr;
}

int main() {
    std::vector<int> arr = {5, 3, 6, 9, 12};
    std::vector<int> expected = {3, 5, 6, 9, 12};
    std::vector<int> sorted_arr = sort_array(arr);
    assert(sorted_arr == expected);
    return 0;
}