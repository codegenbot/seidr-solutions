#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> even_elements;
    for (float num : vec) {
        if (static_cast<int>(num) % 2 == 0) {
            even_elements.push_back(num);
        }
    }
    std::sort(even_elements.begin(), even_elements.end());
    int idx = 0;
    for (int i = 0; i < vec.size(); ++i) {
        if (static_cast<int>(vec[i]) % 2 == 0) {
            vec[i] = even_elements[idx++];
        }
    }
    return vec;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), std::vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
}