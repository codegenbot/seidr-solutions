#include <algorithm>

bool move_one_ball(vector<int> arr) {
    if(arr.empty()) {
        return true;
    }
    
    int n = arr.size();
    int minIndex = min_element(arr.begin(), arr.end()) - arr.begin();
    
    for(int i = 0; i < n; i++) {
        if(arr[(minIndex + i) % n] != i + 1) {
            return false;
        }
    }
    
    return true;
}