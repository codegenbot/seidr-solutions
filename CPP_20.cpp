#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_elements = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            closest_elements = {numbers[i], numbers[i + 1]};
        }
    }
    return {closest_elements.first, closest_elements.second};
}

bool issame(pair<float, float> a, pair<float, float> b) {
    return (abs(a.first - b.first) < 1e-6 && abs(a.second - b.second) < 1e-6);
}