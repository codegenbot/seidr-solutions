#include <vector>
int can_arrange(vector<int> arr) {
    int prev = INT_MIN;
    int firstOutOfOrderIndex = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= prev) {
            return i;
        }
        prev = arr[i];
    }
    return firstOutOfOrderIndex;
}