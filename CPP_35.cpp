#include <algorithm>
#include <cmath>

int findMax(int arr[], int n) {
    if (n == 0) {
        throw runtime_error("Array is empty");
    }
    
    return *max_element(arr, arr + n);
}