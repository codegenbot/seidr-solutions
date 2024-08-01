#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest_pair = {numbers[0], numbers[1]};
    float min_diff = abs(numbers[0] - numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < min_diff) {
            min_diff = abs(numbers[i] - numbers[i + 1]);
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    return {closest_pair.first, closest_pair.second};
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert (issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});

    return 0;
}