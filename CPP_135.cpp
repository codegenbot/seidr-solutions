#include <vector>

int can_arrange(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            int first = arr[i];
            int second = arr[i - 1];
            swap(first, second);
            return i;
        }
    }
    return -1;
}