#include <vector>
#include <algorithm>

bool std::issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> std::find_closest_elements(std::vector<float> arr) {
    std::sort(arr.begin(), arr.end());
    return {arr[arr.size() - 2], arr[arr.size() - 1]};
}