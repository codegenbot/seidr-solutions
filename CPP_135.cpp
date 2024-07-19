#include <vector>

int can_arrange(vector<int> arr) {
    int i = 0;
    while (i < arr.size() - 1) {
        if (arr[i + 1] <= arr[i]) {
            return i + 1;
        }
        i++;
    }
    return -1;
}