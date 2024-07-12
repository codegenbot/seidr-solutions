#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int>::iterator first, std::vector<int>::iterator last);

bool move_one_ball(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        std::rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}

int main() {
    // Test the move_one_ball function
    return 0;
}