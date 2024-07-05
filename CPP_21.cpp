#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

vector<float> rescale_to_unit(const vector<float>& numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    vector<float> result;
    for (float num : numbers) {
        result.push_back((num - min_val) / (max_val - min_val));
    }
    return result;
}

bool issame(const vector<float>& a, const vector<float>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    cout << "All tests passed!" << endl;
    return 0;
}