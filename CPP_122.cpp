#include <vector>

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < min(k, arr.size()); i++) {
        if (-100 <= arr[i] && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}