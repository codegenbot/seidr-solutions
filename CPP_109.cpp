#include <iostream>
#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) {
        return true;
    }
    
    int n = arr.size();
    int minIdx = 0;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIdx]) {
            minIdx = i;
        }
    }
    
    int shift = (n - minIdx) % n;
    
    for (int i = 0; i < n; i++) {
        if (arr[(i + shift) % n] < arr[(i + shift - 1) % n]) {
            return false;
        }
    }
    
    return true;
}