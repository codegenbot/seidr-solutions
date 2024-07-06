```cpp
#include <vector>
#include <algorithm>

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < k; ++i) {
        arr.push_back(0);
    }
    return arr;
}