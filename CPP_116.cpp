#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    int count_a = __builtin_popcount(a);
    int count_b = __builtin_popcount(b);
    return count_a == count_b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (issame(a, b)) {
            return a < b;
        }
        return __builtin_popcount(a) < __builtin_popcount(b);
    });
    return arr;
}