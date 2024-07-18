#include <vector>
#include <cassert>

bool issame(const std::vector<float>& l, const std::vector<float>& r) {
    if (l.size() != r.size()) {
        return false;
    }
    for (size_t i = 0; i < l.size(); ++i) {
        if (l[i] != r[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector<float> input = {1.2, -3.4, 5.6, -7.8};
    std::vector<float> expected_output = {1.2, 5.6};

    assert(issame(get_positive(input), expected_output));
    return 0;
}