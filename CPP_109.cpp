#include <algorithm>

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    vector<int> temp(arr);
    sort(temp.begin(), temp.end());
    
    for (int i = 0; i < n; i++) {
        bool sorted = true;
        for (int j = 1; j < n; j++) {
            if (temp[(i + j) % n] > temp[(i + j - 1) % n]) {
                sorted = false;
                break;
            }
        }
        if (!sorted) return false;
    }
    
    return true;
}