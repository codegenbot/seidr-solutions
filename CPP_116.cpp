#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    auto comp = [](int a, int b) {
        int ones_a = __builtin_popcount(a);
        int ones_b = __builtin_popcount(b);

        if (ones_a == ones_b) {
            return a - b;
        } else {
            return ones_a - ones_b;
        }
    };

    sort(arr.begin(), arr.end(), comp);

    return arr;
}