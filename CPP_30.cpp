#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> vec) {
    std::vector<float> positive_values;
    for (float num : vec) {
        if (num >= 0) {
            positive_values.push_back(num);
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
    assert(issame(get_positive({-1.5, 0.0, 3.7, -2.3}), {0.0, 3.7}));
    assert(issame(get_positive({-1.2, -5.5, 2.8}), {2.8}));
    
    return 0;
}