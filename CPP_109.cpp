#include <algorithm>
#include <vector>
#include <cassert>

bool move_one_ball(const std::vector<int>& arr) {
    std::vector<int> temp = arr; // Make a copy of the input vector
    int n = temp.size();
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(temp.begin(), temp.end())) {
            return true;
        }
        std::rotate(temp.rbegin(), temp.rbegin() + 1, temp.rend());
    }
    return false;
}

int main() {
    assert(move_one_ball(std::vector<int>{}) == true);
    return 0;
}