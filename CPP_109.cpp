#include <algorithm>

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0)
        return true;
    
    vector<int> temp = arr;
    for (int i = 0; i < n; i++) {
        sort(temp.begin(), temp.end());
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (temp[j] == arr[i]) {
                found = true;
                break;
            }
        }
        if (!found)
            return false;
        rotate(temp.begin(), temp.end(), temp.end() - 1);
    }
    
    return true;
}