#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() < 2) return {};

    sort(numbers.begin(), numbers.end());
    float min_diff = fabs(numbers[1] - numbers[0]);
    pair<float, float> closest_pair = {numbers[0], numbers[1]};
    
    for (size_t i = 1; i < numbers.size() - 1; ++i) {
        float diff = fabs(numbers[i + 1] - numbers[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return {closest_pair.first, closest_pair.second};
}

bool issame(vector<float> a, vector<float> b) {
    return (a.size() == b.size() && equal(a.begin(), a.end(), b.begin()));
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {4.1, 5.1}));
    assert(issame(find_closest_elements({8.5, 7.4, 3.0, 2.5}), {2.5, 3.0}));
    cout << "All tests passed!" << endl;
    return 0;
}