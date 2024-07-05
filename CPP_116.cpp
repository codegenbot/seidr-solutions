#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int count_ones(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int ones_a = count_ones(a);
        int ones_b = count_ones(b);
        if (ones_a == ones_b) {
            return a < b;
        }
        return ones_a < ones_b;
    });
    return arr;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    assert(issame(sort_array({5, 3, 9, 7}), {3, 5, 7, 9}));
    assert(issame(sort_array({10, 5, 6, 7}), {5, 10, 6, 7}));
    assert(issame(sort_array({1, 2, 3, 4, 5, 6, 7, 8}), {1, 2, 4, 8, 3, 5, 6, 7}));
    return 0;
}