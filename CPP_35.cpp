#include <algorithm>
#include <cmath>

int findMax(int arr[], int n) {
    return *std::max_element(arr, arr+n);
}

double findMaxDouble(double arr[], int n) {
    return *std::max_element(arr, arr+n);
}