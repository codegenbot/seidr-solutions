#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<float> get_positive(std::vector<float> input_values) {
    std::vector<float> positive_values;

    for (float val : input_values) {
        if (val > 0) {
            positive_values.push_back(val);
        }
    }

    return positive_values;
}

int main() {
    assert(issame(get_positive({}), std::vector<float>{}));
}