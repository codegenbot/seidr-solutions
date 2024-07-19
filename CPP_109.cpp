#include <vector>
#include <algorithm>

bool move_one_ball(const std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        std::vector<int> temp = arr;
        std::rotate(temp.rbegin(), temp.rbegin() + 1, temp.rend());
    }
    return false;
}

int main() {
    std::vector<int> test_vector = std::vector<int>{};
    bool result = move_one_ball(test_vector);
    return 0;
}