```cpp
#include <iostream>
#include <vector>
#include <utility>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            result.push_back(arr[i]);
        }
    }
    if (result.empty()) {
        return {};
    }
    sort(result.begin(), result.end());
    return result;
}