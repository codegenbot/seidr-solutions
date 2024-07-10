#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const vector<float>& a, const vector<float>& b) {
    return (a[0] == b[0] && a[1] == b[1]);
}

vector<float> find_closest_elements(const vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    int idx1 = 0, idx2 = 1;
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            idx1 = i;
            idx2 = i + 1;
        }
    }
    return {numbers[idx1], numbers[idx2]};
}

int main() {
    vector<float> numbers = {3.5, 1.2, 4.8, 2.1, 5.7};
    vector<float> closest_elements = find_closest_elements(numbers);
    for (float num : closest_elements) {
        cout << num << " ";
    }
    return 0;
}