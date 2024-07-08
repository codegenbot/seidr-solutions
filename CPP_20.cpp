#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<float> a, vector<float> b) {
    return (a[0] == b[0]) && (a[1] == b[1]);
}

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_pair = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    return closest_pair;
}

int main() {
    auto result = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});
    assert(issame(result, {2.2, 3.1}));
    
    cout << "Test case passed successfully!" << endl;
    return 0;
}