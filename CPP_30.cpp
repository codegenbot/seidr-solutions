#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (fabs(a[i] - b[i]) > 1e-4) return false;
    }
    return true;
}

int main() {
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({-1.0, 0.0, 1.0, 2.0}), {1.0, 2.0}));
    assert(issame(get_positive({-5.2, 3.3, -2.2, 4.0, -0.1}), {3.3, 4.0}));
    assert(issame(get_positive({1.001, 0.001, 0.0001, -0.0001, -1.001}), {1.001, 0.001, 0.0001}));
    return 0;
}