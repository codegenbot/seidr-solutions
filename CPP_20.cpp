#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <cfloat>
#include <cassert>

using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = FLT_MAX;
    float num1 = 0, num2 = 0;
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        float diff = fabs(numbers[i + 1] - numbers[i]);
        if (diff < min_diff) {
            min_diff = diff;
            num1 = numbers[i];
            num2 = numbers[i + 1];
        }
    }
    return {num1, num2};
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (fabs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {3.1, 4.1}));
    cout << "Test passed!" << endl;
    return 0;
}