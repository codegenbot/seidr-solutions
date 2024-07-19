#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> arr = a;
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });
    return arr == b;
}