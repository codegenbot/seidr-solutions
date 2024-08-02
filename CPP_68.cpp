```cpp
#include <vector>
#include <utility>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;
    if (arr.empty()) return {};

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            bool foundSmallest = false;
            for (int j = 0; j < i; j++) {
                if (arr[j] % 2 == 0 && arr[j] < arr[i]) {
                    foundSmallest = true;
                    break;
                }
            }
            if (!foundSmallest) {
                result.push_back({arr[i], i});
                return result;
            }
        }
    }

    return {};
}