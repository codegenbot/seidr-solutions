#include<vector>
using namespace std;
bool move_one_ball(vector<int> arr){
    if (arr.empty()) {
        return true;
    }
    
    int n = arr.size();
    int min_idx = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[min_idx]) {
            min_idx = i;
        }
    }
    
    return (min_idx >= n - 1 || arr[min_idx] < arr[n - 1] || arr[0] < arr[n - 1]);
}