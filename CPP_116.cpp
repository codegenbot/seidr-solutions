#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> sort_array(vector<int>& arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
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
    assert(issame(sort_array({2, 4, 8, 16, 32}), vector<int>{2, 4, 8, 16, 32}));
    return 0;
}