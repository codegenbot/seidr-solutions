#include <vector>
#include <algorithm>
#include <cmath>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-5)
            return false;
    }
    return true;
}

int main() {
    std::vector<float> get_positive(std::vector<float> v) {
        for(float &x : v) {
            x = (x > 0) ? x : 0.0f;
        }
        return v;
    }

    // Test the code
    assert(issame(get_positive({}), {}));
    return 0;
}