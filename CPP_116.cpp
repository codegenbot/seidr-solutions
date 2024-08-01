#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end(),
        [](int a, int b) {
            if (count_bits(a) == count_bits(b)) {
                return a < b;
            }
            return count_bits(a) < count_bits(b);
        });
    return sorted_arr;
}

int count_bits(int n) {
    return __builtin_popcount(n);
}