#include <vector>
#include <algorithm>

bool move_one_ball(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> temp = arr;
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(temp.begin(), temp.end()))
            return true;
        std::rotate(temp.rbegin(), temp.rbegin() + 1, temp.rend());
    }
    return false;
}