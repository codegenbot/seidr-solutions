#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <iostream>

using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
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
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); ++i)
        if (fabs(a[i] - b[i]) > 1e-6)
            return false;
    return true;
}

int main() {
    vector<float> numbers;
    float number;
    cout << "Enter numbers (non-number to stop): ";
    while (cin >> number) {
        numbers.push_back(number);
    }

    vector<float> result = find_closest_elements(numbers);
    cout << "Closest elements: " << result[0] << " " << result[1] << endl;

    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    return 0;
}