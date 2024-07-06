#include<stdio.h>
#include<vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0)
        return true;
    
    bool sorted = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[0]) {
            continue;
        }
        sorted = false;
            break;
    }
    return sorted;
}