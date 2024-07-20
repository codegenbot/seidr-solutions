#include <algorithm>
#include <cmath>

int findMax(int arr[], int n) {
    vector<int> l(arr, arr+n);
    return *max_element(l.begin(), l.end());
}