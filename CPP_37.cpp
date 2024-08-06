#include <iostream>
#include <vector>
#include <algorithm>

std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> even;
    for (float num : vec) {
        if (static_cast<int>(num) % 2 == 0) {
            even.push_back(num);
        }
    }
    std::sort(even.begin(), even.end());
    std::reverse(even.begin(), even.end());
    size_t index = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (static_cast<int>(vec[i]) % 2 == 0) {
            vec[i] = even[index++];
        }
    }
    return vec;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}