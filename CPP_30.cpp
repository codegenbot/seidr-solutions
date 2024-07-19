#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (!(std::abs(a[i]) == std::abs(b[i])))
            return false;
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> input) {
    std::vector<float> positive_input;
    for (float num : input) {
        if (num > 0)
            positive_input.push_back(num);
    }
    return positive_input;
}

int main() {
    std::vector<float> input;
    assert(issame(get_positive(input), {}));
    return 0;
}