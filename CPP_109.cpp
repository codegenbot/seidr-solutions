#include <vector>
#include <algorithm>

bool move_one_ball(std::vector<int>& arr) {
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
    std::vector<int> balls = {5, 2, 8, 1, 4}; // Initialize vector with starting values
    bool result = move_one_ball(balls);
    return 0;
}