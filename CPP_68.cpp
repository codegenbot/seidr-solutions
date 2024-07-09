```
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<int> pluck(const std::vector<int>& arr) {
    std::vector<int> result;

    if (arr.empty()) return result;

    int* smallest_even_addr = nullptr;
    int smallest_even = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            smallest_even_addr = &arr[i];
        }
    }

    result.push_back(*smallest_even_addr);
    result.push_back(int((smallest_even_addr - &arr[0])));

    return result;
}