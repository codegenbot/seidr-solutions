#include <vector>

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) return false;
    }
    return true;
}