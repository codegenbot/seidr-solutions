#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> vec) {
    std::vector<float> result;
    for (float val : vec) {
        if (val > 0) {
            result.push_back(val);
        }
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    std::vector<float> positive_a = get_positive(a);
    std::vector<float> positive_b = get_positive(b);

    return positive_a == positive_b;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}