#include <vector>
#include <cmath>
#include <cassert>

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
        if (fabs(a[i] - b[i]) > 1e-4) return false;
    }
    return true;
}

int main() {
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({-1.0, 2.0, 0.0, 3.5}), {2.0, 3.5}));
    return 0;
}