#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    float range = max_val - min_val;
    for (auto &num : numbers) {
        num = (num - min_val) / range;
    }
    return numbers;
}

bool issame(vector<float> a, vector<float> b) {
    const float EPSILON = 1e-6;
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (fabs(a[i] - b[i]) > EPSILON) return false;
    }
    return true;
}

int main() {
    assert(issame(
        rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}),
        {0.25, 0.0, 1.0, 0.5, 0.75}
    ));
    return 0;
}