```
#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    std::vector<int> result;
    int n = arr.size();
    if (n == 0) return result;
    int maxRight = arr.back();
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
        } else {
            result.push_back(maxRight);
        }
    }
    result.push_back(arr.back());
    return result;
}