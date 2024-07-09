#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    // Your implementation of the issame function
    // For example, you can compare sizes:
    return v1.size() == v2.size();
}

std::vector<int> pluck(std::vector<int> arr) {
    if (arr.empty()) return arr;

    int* smallest_even_addr = nullptr;
    int smallest_even = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            smallest_even_addr = &arr[i];
        }
    }

    std::vector<int> result;
    result.push_back(*smallest_even_addr);
    result.push_back(distance(arr.begin(), find(arr.begin(), arr.end(), *smallest_even_addr)) - arr.begin());
    return result;
}