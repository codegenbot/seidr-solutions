#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <cmath>
#include <cfloat>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (fabs(a[i] - b[i]) > FLT_EPSILON) return false;
    }
    return true;
}

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = FLT_MAX;
    float num1 = 0, num2 = 0;
    for (size_t i = 1; i < numbers.size(); ++i) {
        float diff = fabs(numbers[i] - numbers[i - 1]);
        if (diff < min_diff) {
            min_diff = diff;
            num1 = numbers[i - 1];
            num2 = numbers[i];
        }
    }
    return {num1, num2};
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {3.1, 4.1}));
    return 0;
}