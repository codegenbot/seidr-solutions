#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const vector<float>& a, const vector<float>& b) {
    return a[0] == b[0] && a[1] == b[1];
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
    vector<float> numbers = {4.5, 2.1, 7.3, 5.2, 1.8};
    vector<float> result = find_closest_elements(numbers);
    for (const auto& num : result) {
        cout << num << " ";
    }
    return 0;
}