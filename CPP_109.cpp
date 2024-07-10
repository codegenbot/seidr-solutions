#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true; // If array is empty, return true
    
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[0]) {
            return false; // If any element is less than or equal to the first element, it's impossible to sort
        }
    }
    
    return true;
}