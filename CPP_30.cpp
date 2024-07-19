#include <vector>
#include <cmath>

using namespace std;

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-6) {
            return false;
        }
    }
    return true;
}

float get_positive(float x) {
    return x > 0 ? x : 0.0f;
}