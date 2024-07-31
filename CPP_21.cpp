#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    for (size_t i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-4) return false;
    }
    return true;
}

vector<float> rescale_to_unit(vector<float> vec) {
    // Implement rescale_to_unit logic here
}

int main() {
    assert(issame(vector<float>{12.0, 11.0, 15.0, 13.0, 14.0}, {0.25, 0.0, 1.0, 0.5, 0.75}));
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}