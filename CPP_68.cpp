#include <vector>
#include <algorithm>

std::vector<int> pluck(std::vector<int> arr) {
    if (arr.empty()) return {};

    int smallest_even = INT_MAX;
    int* index_ptr = nullptr;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index_ptr = &i;
        }
    }

    std::vector<int> result = {smallest_even, *index_ptr};

    return result;
}