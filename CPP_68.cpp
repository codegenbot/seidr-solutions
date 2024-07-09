#include <vector>
#include <iostream>

std::vector<int> pluck(std::vector<int> arr) {
    if (arr.empty()) return {};

    int minEven = INT_MAX;
    int index = 0;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            index = i;
        }
    }

    return {minEven, index};
}