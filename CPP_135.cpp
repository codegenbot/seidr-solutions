```
#include <vector>
#include <climits>

int can_arrange(vector<int> arr) {
    int prev = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= prev) {
            return -1; // or any other suitable error code
        }
        prev = arr[i];
    }
    return 0; // or any other suitable success code
}