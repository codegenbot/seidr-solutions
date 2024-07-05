#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> get_positive(const vector<float>& l) {
    vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const vector<float>& a, const vector<float>& b) {
    if(a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); ++i) {
        if(fabs(a[i] - b[i]) > 1e-4) return false;
    }
    return true;
}

int main() {
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({1.0, -2.0, 3.5}), {1.0, 3.5}));
    assert(issame(get_positive({-1.0, -2.0, -3.5}), {}));
    return 0;
}