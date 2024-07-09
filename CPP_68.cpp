#include <vector>
#include <algorithm>

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result = {};
    if (arr.empty()) return result;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && (result.empty() || arr[i] > result[0].first)) {
            result = {{arr[i], i}};
        } else if (arr[i] % 2 == 0 && arr[i] <= result[0].first) {
            result = {{arr[i], i}};
        }
    }

    return result;
}