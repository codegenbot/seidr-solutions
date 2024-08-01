#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> derivative(const vector<float>& xs) {
    vector<float> result;
    for (size_t i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(const vector<float>& a, const vector<float>& b) {
    for (size_t i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-4) return false;
    }
    return true;
}