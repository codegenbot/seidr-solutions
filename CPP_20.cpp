#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

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

int main() {
    vector<float> numbers = {4.1, 2.3, 5.7, 6.1, 8.9, 3.4};
    pair<float, float> result = find_closest_elements(numbers);

    cout << "Closest elements: " << result.first << " and " << result.second << endl;

    return 0;
}