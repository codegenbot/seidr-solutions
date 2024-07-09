#include <algorithm>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    std::vector<int> temp = arr;
    for (int i = 0; i < n; ++i) {
        std::sort(temp.begin(), temp.end());
        if (temp == arr) return true;
        for (int j = 0; j < n - 1; ++j) {
            std::swap(temp[j], temp[n - 1]);
        }
    }
    return false;
}