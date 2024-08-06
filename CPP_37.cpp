#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> even;

    for (float num : vec) {
        if (static_cast<int>(num) % 2 == 0) {
            even.push_back(num);
        }
    }

    std::sort(even.begin(), even.end());

    return even;
}

int main() {
    assert (issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
}