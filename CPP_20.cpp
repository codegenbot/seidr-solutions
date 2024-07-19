#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b);

std::vector<float> find_closest_elements(std::vector<float> arr) {
    std::sort(arr.begin(), arr.end());
    return {arr[arr.size() - 2], arr[arr.size() - 1]};
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}