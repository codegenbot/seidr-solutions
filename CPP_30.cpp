#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> positive_numbers;
    for (float num : l) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }
    return positive_numbers;
}

int main() {
    assert(issame(get_positive({1, 2, 3}), {1, 2, 3}));
    return 0;
}