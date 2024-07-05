#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() < 2) return {}; // Ensure there are at least two elements

    sort(numbers.begin(), numbers.end());
    float min_diff = fabs(numbers[1] - numbers[0]);
    int index = 0;

    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = fabs(numbers[i + 1] - numbers[i]);
        if (diff < min_diff) {
            min_diff = diff;
            index = i;
        }
    }
    return {numbers[index], numbers[index + 1]};
}

int main() {
    int n;
    cin >> n;
    vector<float> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    vector<float> result = find_closest_elements(numbers);
    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "Not enough elements" << endl;
    }

    return 0;
}