#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true; // If the vector is empty, return true
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[0]) return false; // If any element in the vector is less than the first one, it's not possible to get a non-decreasing order
    }
    
    return true;
}