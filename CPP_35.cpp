#include <vector>
#include <cassert>
#include <cmath>

float max_element(const vector<float>& l) {
    assert(!l.empty());
    float max_val = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max_val) {
            max_val = l[i];
        }
    }
    return max_val;
}

int main() {
    assert (abs(max_element({5.0, 3.0, -5.0, 2.0, -3.0, 3.0, 9.0, 0.0, 124.0, 1.0, -10.0})- 124.0)<1e-4);
}