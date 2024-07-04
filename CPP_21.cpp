#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    for (auto &num : numbers) {
        num = (num - min_val) / (max_val - min_val);
    }
    return numbers;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(rescale_to_unit({12.0f, 11.0f, 15.0f, 13.0f, 14.0f}), {0.25f, 0.0f, 1.0f, 0.5f, 0.75f}));
    cout << "Test passed!" << endl;
    return 0;
}