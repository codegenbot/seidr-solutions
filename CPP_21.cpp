#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 4.0, 8.0};
    vector<float> rescaled_numbers = rescale_to_unit(numbers);
    vector<float> expected_result = {0.0, 0.142857, 0.428571, 1.0};
    assert(issame(rescaled_numbers, expected_result));

    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));

    cout << "All tests passed." << endl;

    return 0;
}