#include <algorithm>

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    vector<int> temp = arr;
    for (int i = 0; i < n; ++i) {
        sort(temp.begin(), temp.end());
        if (temp == arr) return true;
        for (int j = 0; j < n - 1; ++j) {
            swap(temp[j], temp[n - 1]);
        }
    }
    return false;
}