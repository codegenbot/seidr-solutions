#include <algorithm>

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    vector<int> temp(arr);
    sort(temp.begin(), temp.end());
    
    for (int i = 0; i < n; i++) {
        bool possible = true;
        for (int j = 0; j < n - 1; j++) {
            if (temp[j] >= arr[i]) {
                possible = false;
                break;
            }
        }
        if (!possible) return false;
    }
    
    return true;
}