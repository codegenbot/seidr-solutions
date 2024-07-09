#include <vector>
#include <algorithm>

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result = {};

    if (arr.empty()) return result;

    for (int i = 0; i < arr.size(); i++) {
        bool foundSame = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                foundSame = true;
                break;
            }
        }

        if (!foundSame) {
            result.push_back({arr[i], i});
        }
    }

    return result;
}