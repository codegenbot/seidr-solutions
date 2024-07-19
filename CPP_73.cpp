#include <iostream>
#include <vector>

int smallest_change(std::vector<int> arr) {
    int min_change = 0;
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] <= arr[i - 1]) {
            min_change += arr[i - 1] - arr[i] + 1;
            arr[i] = arr[i - 1] + 1;
        }
    }
    return min_change;
}