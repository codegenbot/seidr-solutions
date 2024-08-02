#include <vector>

int can_arrange(vector<int> arr) {
    int first = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= first)
            return i;
        first = arr[i];
    }
    return -1;
}