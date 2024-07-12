#include <algorithm>
#include <cmath>

int absoluteMax(int arr[], int n) {
    vector<int> l(arr, arr + n);
    return abs(*max_element(l.begin(), l.end()));
}