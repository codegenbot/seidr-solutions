#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool move_one_ball(vector<int>& arr) {
    if (arr.empty()) {
        return false;
    }

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
    assert(move_one_ball({1, 2, 3, 4}) == true);
    assert(move_one_ball({3, 4, 1, 2}) == false);
   
    assert(move_one_ball({}) == false); // Additional test case for empty vector

    return 0;
}