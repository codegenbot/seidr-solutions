#include <iostream>
#include <vector>
#include <cassert>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void solve_problem() {
    assert(move_one_ball({}) == true);
    assert(move_one_ball({1, 2, 3, 4, 5}) == true);
    assert(move_one_ball({5, 4, 3, 2, 1}) == false);
    assert(move_one_ball({1, 3, 2, 4, 5}) == false);
}

int main() {
    solve_problem();
    return 0;
}