#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool move_one_ball(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        reverse(arr.begin(), arr.end());
    }
    return false;
}

int main() {
    assert(move_one_ball({1, 2, 3, 4}) == true);
    assert(move_one_ball({3, 4, 1, 2}) == false);

    return 0;
}