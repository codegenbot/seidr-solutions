#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int move_one_ball(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}

int main() {
    vector<int> test1 = {1, 2, 3, 4};
    vector<int> test2 = {3, 4, 1, 2};

    assert(move_one_ball(test1) == true);
    assert(move_one_ball(test2) == false);

    return 0;
}