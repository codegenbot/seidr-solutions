#include <vector>
#include <cassert>

int add_elements(const vector<int>& arr, int k) {
    assert(k >= 0 && k <= arr.size());
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}