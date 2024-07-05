#include <vector>
#include <cassert>

bool move_one_ball(const std::vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return true;

    int shift_point = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr[(i + 1) % n]) {
            if (shift_point != -1) return false;
            shift_point = i;
        }
    }
    return true;
}

int main() {
    assert(move_one_ball({}) == true);
    assert(move_one_ball({1, 2, 3}) == true);
    assert(move_one_ball({3, 1, 2}) == true);
    assert(move_one_ball({2, 1, 3}) == false);
    return 0;
}