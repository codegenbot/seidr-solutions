#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

bool issame2(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(const vector<int>& arr) {
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if (count_a != count_b) {
            return count_a < count_b;
        } else {
            return a < b;
        }
    });
    return sorted_arr;
}

int test_main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), vector<int>{2, 4, 8, 16, 32}));
    cout << "Test passed!" << endl;
    return 0;
}