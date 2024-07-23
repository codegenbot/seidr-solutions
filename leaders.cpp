#include <vector>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& arr) {
    std::vector<int> result;
    int maxRight = 0;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    std::reverse(result.begin(), result.end());
    return result;
}