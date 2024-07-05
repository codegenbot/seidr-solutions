#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    if (numbers.empty()) return numbers; // Handle empty vector case
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    float range = max_val - min_val;
    if (range == 0) return vector<float>(numbers.size(), 0.0f); // Handle case where all elements are the same
    for (auto &num : numbers) {
        num = (num - min_val) / range;
    }
    return numbers;
}

bool issame(vector<float> a, vector<float> b) {
    const float epsilon = 1e-6;
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > epsilon) return false;
    }
    return true;
}

int main() {
    vector<float> expected = {0.25, 0.0, 1.0, 0.5, 0.75};
    vector<float> result = rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0});
    assert(issame(result, expected));
    cout << "Test passed!" << endl;
    return 0;
}