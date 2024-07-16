#include <vector>

bool move_one_ball(std::vector<int> arr) {
    if (arr.empty()) {
        return true;
    }

    int n = arr.size();
    int min_val = *min_element(arr.begin(), arr.end());
    int min_idx = find(arr.begin(), arr.end(), min_val) - arr.begin();

    for (int i = 0; i < n; ++i) {
        if (arr[(min_idx + i) % n] != min_val + i) {
            return false;
        }
    }

    return true;
}