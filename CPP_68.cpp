#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
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
    result.push_back(std::distance(arr.begin(), std::find(arr.begin(), arr.end(), *smallest_even_addr)) - 1);

    return result;
}