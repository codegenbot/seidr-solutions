#include <algorithm>
#include <cmath>

int findMax(int arr[], int n) {
    return *max_element(arr, arr+n);
}