#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    std::vector<int> result;
    int n = arr.size();
    int max_right = arr[n-1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= max_right) {
            result.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    return result;
}