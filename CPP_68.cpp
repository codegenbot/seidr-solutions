#include <iostream>
#include <vector>

std::vector<int> pluck(const std::vector<int>& arr) {
    if (arr.empty()) return {};

    int minEvenValue = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }

    std::vector<int> result;
    if (minEvenValue != INT_MAX) {
        result.push_back(minEvenValue);
        result.push_back(minIndex);
    }

    return result;
}