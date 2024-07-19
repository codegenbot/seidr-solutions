#include <algorithm>
#include <vector>
#include <cassert>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        std::rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}

int main() {
    assert(move_one_ball({}) == true);
    assert(move_one_ball({1, 2, 3, 4}) == true);
    assert(move_one_ball({4, 3, 2, 1}) == true);
    assert(move_one_ball({2, 1, 4, 3}) == true);
    return 0;
}