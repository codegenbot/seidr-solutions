#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> get_positive(vector<float> l){
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
    for (size_t i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-6) return false; // Using a small epsilon for float comparison
    }
    return true;
}

int main() {
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({1.0, -1.0, 2.5, 0.0}), {1.0, 2.5}));
    return 0;
}