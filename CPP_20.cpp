#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <cfloat> // for FLT_MAX

using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = FLT_MAX;
    vector<float> closest_pair(2);

    for (size_t i = 1; i < numbers.size(); ++i) {
        float diff = numbers[i] - numbers[i - 1];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair[0] = numbers[i - 1];
            closest_pair[1] = numbers[i];
        }
    }

    return closest_pair;
}

bool issame(vector<float> a, vector<float> b) {
    const float epsilon = 1e-5;
    return fabs(a[0] - b[0]) < epsilon && fabs(a[1] - b[1]) < epsilon;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));

    cout << "All tests passed." << endl;
    return 0;
}