#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (size_t i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (fabs(a[i] - b[i]) > 1e-5) return false;
    }
    return true;
}

int main() {
    assert(issame(derivative({1}), {}));
    assert(issame(derivative({1,2}), {2}));
    assert(issame(derivative({1,2,3}), {2, 6}));
    assert(issame(derivative({1,2,3,4}), {2, 6, 12}));
    return 0;
}