#include <algorithm>
int findMax(int arr[], int n) {
    std::vector<int> l(arr, arr + n);
    auto maxVal = *std::max_element(l.begin(), l.end());
    return maxVal;