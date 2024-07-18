#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_array(vector<int> arr);

bool vector_equal(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](auto a, auto b) {
        return __builtin_popcount(a) == __builtin_popcount(b) ? a < b : __builtin_popcount(a) < __builtin_popcount(b);
    });
    return arr;
}

int contest_main() {
    vector<int> expected_result{2, 4, 8, 16, 32};
    assert(vector_equal(sort_array({2, 4, 8, 16, 32}), vector<int>{2, 4, 8, 16, 32}));
    return 0;
}