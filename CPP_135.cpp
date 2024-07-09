#include <vector>

int can_arrange(vector<int> arr) {
    int first = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i;
        }
        if (first == -1 && arr[i] < arr[0]) {
            first = i;
        }
    }
    return first + 1;
}