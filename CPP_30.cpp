#include <vector>
#include <cassert>
#include <cmath> // Include for abs

using namespace std;

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-4) return false; // Use abs from <cmath>
    }
    return true;
}

int main() {
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({-1.0f, 2.0f, -3.0f, 4.0f}), {2.0f, 4.0f}));
    assert(issame(get_positive({0.0f, 1.5f, -2.5f, 3.5f}), {1.5f, 3.5f}));
    assert(issame(get_positive({1.1f, 2.2f, 0.0f, -4.4f}), {1.1f, 2.2f}));
    return 0;
}