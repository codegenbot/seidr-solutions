#include <vector>

bool move_one_ball(vector<int> arr) {
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
    return 0;
}