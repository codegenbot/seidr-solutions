#include <vector>
#include <algorithm>
#include <cassert>

bool move_one_ball(const std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        std::vector<int> temp = arr;
        std::rotate(temp.rbegin(), temp.rbegin() + 1, temp.rend());
        arr = temp;
    }
    return false;
}

int main() {
    assert(move_one_ball({1, 2, 3, 4}) == true);
    return 0;
}