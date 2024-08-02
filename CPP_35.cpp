#include <algorithm>
#include <cmath>

int maxAbs(int arr[], int n) {
    return *std::max_element(arr, arr+n);
}