#include <algorithm>
#include <cmath>

long long maximumProduct(int arr[], int n) {
    long long result = *max_element(arr, arr+n);
    return result;
}