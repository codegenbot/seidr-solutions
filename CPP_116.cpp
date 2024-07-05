#include <iostream>
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
    // Test case
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    cout << "All test cases passed." << endl;
    return 0;
}