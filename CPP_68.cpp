#include <iostream>
#include <vector>

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;
    if (arr.empty()) return result;

    int smallest_even = INT_MAX;
    int index_of_smallest_even = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index_of_smallest_even = i;
        }
    }

    result.push_back({smallest_even, index_of_smallest_even});
    return result;
}

int main() {
    assert(pluck({7, 9, 7, 1}) == {{},});
    return 0;
}