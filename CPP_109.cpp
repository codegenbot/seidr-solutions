#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

bool solve(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}

bool move_one_ball(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(solve({1, 2, 3, 4}) == true);
    assert(solve({3, 4, 1, 2}) == false);

    assert(move_one_ball({1, 2, 3, 4}) == true);

    return 0;
}