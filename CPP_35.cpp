#include <algorithm>
#include <cmath>

int largestAbsoluteValue(int arr[], int n) {
    vector<int> l;
    for (int i = 0; i < n; i++) {
        l.push_back(arr[i]);
    }
    
    return *max_element(abs(l.begin(), abs(l.end()));
}