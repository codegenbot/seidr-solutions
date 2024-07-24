```cpp
#include <algorithm>
#include <assert.h>
#include <vector>
#include <cstdint>

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
        if (areEqual({arr[i]}, {(int){arr[i + 1]}}) && (arr[i] > arr[i + 1])) return false;
    }
    return true;
}

int mainFunction() {
    std::vector<std::vector<int>> arr = {{0}, {6}, {6}, {-76}, {-21}, {23}, {4}};
    std::vector<int> result = {};
    for (const auto& v : arr) {
        if (result.empty()) {
            result = v;
        } else {
            while (!order_by_points({(int){result.back()}, (int){v.back()}})) {
                if ((int)v.back() > (int)result.back()) {
                    result.push_back(v.back());
                    v.pop_back();
                } else {
                    result.push_back(result.back());
                    result.pop_back();
                }
            }
            for (int i : v) {
                result.push_back(i);
            }
        }
    }
    assert(areEqual(result, {-76, -21, 0, 4, 23, 6, 6}) && result.size() == 7);
    return 0;
}