#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

float get_positive(float x) {
    if(x>0) return x;
    else return 0;
}
int main() {
    assert(issame(std::vector<float>(get_positive({1, -2, 3})), {1, 0, 3}));
    return 0;
}