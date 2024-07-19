#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> find_closest_elements(std::vector<float> arr) {
    std::sort(arr.begin(), arr.end());
    return {arr[arr.size() - 2], arr[arr.size() - 1]};
}

int main() {
    return issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), std::vector<float>{4.1, 5.1});
}