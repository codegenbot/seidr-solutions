#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b);

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> positive_values;
    for (float val : v) {
        if (val > 0) {
            positive_values.push_back(val);
        }
    }
    return positive_values;
}

int main() {
    std::vector<float> positive_vals = get_positive({});
    assert(!positive_vals.empty());
    return 0;
}