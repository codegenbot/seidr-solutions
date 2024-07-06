#include <algorithm>

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) {
        return true;
    }
    
    vector<int> arrCopy = arr;
    sort(arrCopy.begin(), arrCopy.end());
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] != arrCopy[(i + 1) % arr.size()]) {
            return false;
        }
    }
    
    return true;
}