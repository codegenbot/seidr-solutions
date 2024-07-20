#include <vector>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> result;
    for (float num : v) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

int main() {
    // Test case 1: Empty vector
    assert(issame(get_positive({}), {}));

    // Test case 2: Positive numbers only
    assert(issame(get_positive({1.0, 2.0, 3.0}), {1.0, 2.0, 3.0}));

    // Test case 3: Negative numbers only
    assert(issame(get_positive({-1.3, -5.0, -2.7}), {}));

    // Test case 4: Mix of positive and negative numbers
    assert(issame(get_positive({-1.0, 2.0, -3.0, 4.0}), {2.0, 4.0}));

    return 0;
}