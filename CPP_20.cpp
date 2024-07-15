#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> find_closest_elements(const std::vector<float>& arr) {
    std::vector<float> closest_elements;
    if (arr.size() < 2) {
        return closest_elements;
    }
    
    float min_diff = std::abs(arr[1] - arr[0]);
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        float diff = std::abs(arr[i + 1] - arr[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {arr[i], arr[i + 1]};
        }
    }
    
    return closest_elements;
}

int main(int argc, char* argv[]) {
    auto result = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});
    assert(issame(result, {2.2, 3.1}));
    return 0;
}