#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result = arr;
    for (int i = 0; i < k; i++) {
        int maxIndex = -1;
        int maxValue = INT_MIN;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] > maxValue) {
                maxValue = arr[j];
                maxIndex = j;
            }
        }
        result[maxIndex] = INT_MAX;
    }
    return result;
}