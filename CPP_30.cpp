#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> positive_values;
    for (float val : v) {
        if (val > 0.0) {
            positive_values.push_back(val);
        }
    }
    return positive_values;
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
    assert(issame(get_positive({}), {}));
    return 0;
}