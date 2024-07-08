#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> positive_values;

    for (float val : v) {
        if (val >= 0) {
            positive_values.push_back(val);
        }
    }

    return positive_values;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    std::vector<float> positive_a = get_positive(a);
    std::vector<float> positive_b = get_positive(b);

    return positive_a == positive_b;
}

int main() {
    assert(issame(get_positive({}), get_positive({})));
    return 0;
}