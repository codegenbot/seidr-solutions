#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> rescale_to_unit(const vector<float>& numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    vector<float> rescaled;
    for (float num : numbers) {
        rescaled.push_back((num - min_val) / (max_val - min_val));
    }
    return rescaled;
}

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

int main() {
    vector<float> result = rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0});
    assert(issame(result, {0.25, 0.0, 1.0, 0.5, 0.75}));
    cout << "Test passed!" << endl;
    return 0;
}