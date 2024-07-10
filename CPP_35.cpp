#include <algorithm>
#include <cmath>

long long maximumElement(long long arr[], int n) {
    return *max_element(arr, arr+n);
}