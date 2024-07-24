#include <algorithm>
#include <vector>
#include <iostream>

bool areEqual(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool order_by_points(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++) {
        if (areEqual({arr[i]}, {arr[i + 1]}) && (arr[i] > arr[i + 1])) return false;
    }
    return true;
}

int mainFunction() {
    std::vector<int> result = order_by_points({0, 6, 6, -76, -21, 23, 4});
    assert(areEqual(result, {-76, -21, 0, 4, 23, 6, 6}) && result.size() == 7);
    return 0;
}