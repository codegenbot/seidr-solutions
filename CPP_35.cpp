#include <algorithm>
#include <cmath>

int largestPositive(int arr[], int n) {
    if (n == 0)
        return 0;
    return *std::max_element(arr, arr+n);
}