#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-6f) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(get_positive({}) == {});
    return 0;
}