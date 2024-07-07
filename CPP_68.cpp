```
#include <vector>
#include <limits>

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;
    if (arr.empty()) return result;

    int minEvenValue = std::numeric_limits<int>::max();
    int index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            index = i;
        }
    }

    result.push_back({minEvenValue, index});
    return result;
}